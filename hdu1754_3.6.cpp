/*
I Hate It
Time Limit: 9000/3000 MS (Java/Others)    Memory Limit: 32768/32768 K (Java/Others)
Total Submission(s): 89685    Accepted Submission(s): 34228


Problem Description
很多学校流行一种比较的习惯。老师们很喜欢询问，从某某到某某当中，分数最高的是多少。
这让很多学生很反感。

不管你喜不喜欢，现在需要你做的是，就是按照老师的要求，写一个程序，模拟老师的询问。当然，老师有时候需要更新某位同学的成绩。
 

Input
本题目包含多组测试，请处理到文件结束。
在每个测试的第一行，有两个正整数 N 和 M ( 0<N<=200000,0<M<5000 )，分别代表学生的数目和操作的数目。
学生ID编号分别从1编到N。
第二行包含N个整数，代表这N个学生的初始成绩，其中第i个数代表ID为i的学生的成绩。
接下来有M行。每一行有一个字符 C (只取'Q'或'U') ，和两个正整数A，B。
当C为'Q'的时候，表示这是一条询问操作，它询问ID从A到B(包括A,B)的学生当中，成绩最高的是多少。
当C为'U'的时候，表示这是一条更新操作，要求把ID为A的学生的成绩更改为B。
 

Output
对于每一次询问操作，在一行里面输出最高成绩。
 

Sample Input
5 6
1 2 3 4 5
Q 1 5
U 3 6
Q 3 4
Q 4 5
U 2 9
Q 1 5
 

Sample Output
5
6
5
9

Hint
Huge input,the C function scanf() will work better than cin
 
 

Author
linle
 

Source
2007省赛集训队练习赛（6）_linle专场
 

Recommend
lcy
*/

#include <bits/stdc++.h>
using namespace std;

int m, n;
const int N = 200000 + 10;
struct xx
{
    int l, r, v;
} T[N * 4];

void Build(int l, int r, int k)
{
    T[k].l = l, T[k].r = r;
    if (l == r)
    {
        scanf("%d", &T[k].v);
        return;
    }
    int mid = (l + r) / 2;
    Build(l, mid, k * 2);
    Build(mid + 1, r, k * 2 + 1);
    T[k].v = max(T[k * 2].v, T[k * 2 + 1].v);
}

void Update(int c, int v, int k)
{
    if (T[k].l == T[k].r && T[k].l == c)
    {
        T[k].v = v;
        return;
    }
    int mid = (T[k].l + T[k].r) / 2;
    if (c <= mid)
        Update(c, v, k * 2);
    else
        Update(c, v, k * 2 + 1);
    T[k].v = max(T[k * 2].v, T[k * 2 + 1].v);
}

int ans;
void Query(int l, int r, int k)
{
    if (l > T[k].r || r < T[k].l)
    {
        return;
    }
    if (l <= T[k].l && r >= T[k].r)
    {
        ans = max(ans, T[k].v);
        return;
    }
    int mid = (T[k].l + T[k].r) / 2;
    if (r < mid)
        Query(l, r, k * 2);
    else if (l > mid)
        Query(l, r, k * 2 + 1);
    else
    {
        Query(l, mid, k * 2);
        Query(mid + 1, r, k * 2 + 1);
    }
}

int main()
{
    while (scanf("%d%d", &n, &m) == 2)
    {
        Build(1, n, 1);
        while (m--)
        {
            char b[3];
            int u, v;
            scanf("%s%d%d", b, &u, &v);
            if (b[0] == 'U')
                Update(u, v, 1);
            else if (b[0] == 'Q')
            {
                ans = 0;
                Query(u, v, 1);
                printf("%d\n", ans);
            }
        }
    }
}
