/*
Number Sequence
Time Limit: 10000/5000 MS (Java/Others)    Memory Limit: 32768/32768 K (Java/Others)
Total Submission(s): 33989    Accepted Submission(s): 14168


Problem Description
Given two sequences of numbers : a[1], a[2], ...... , a[N], and b[1], b[2], ...... , b[M] (1 <= M <= 10000, 1 <= N <= 1000000). Your task is to find a number K which make a[K] = b[1], a[K + 1] = b[2], ...... , a[K + M - 1] = b[M]. If there are more than one K exist, output the smallest one.


Input
The first line of input is a number T which indicate the number of cases. Each case contains three lines. The first line is two numbers N and M (1 <= M <= 10000, 1 <= N <= 1000000). The second line contains N integers which indicate a[1], a[2], ...... , a[N]. The third line contains M integers which indicate b[1], b[2], ...... , b[M]. All integers are in the range of [-1000000, 1000000].


Output
For each test case, you should output one line which only contain K described above. If no such K exists, output -1 instead.


Sample Input
2
13 5
1 2 1 2 3 1 2 3 1 3 2 1 2
1 2 3 1 3
13 5
1 2 1 2 3 1 2 3 1 3 2 1 2
1 2 3 2 1


Sample Output
6
-1


Source
HDU 2007-Spring Programming Contest


Recommend
lcy   |   We have carefully selected several similar problems for you:  1358 3336 1686 3746 1251
*/
#include <bits/stdc++.h>
using namespace std;

int n, tot;
int pre[10001],in[10001];

void xx(int l, int r){
    if(l > r) return;
    tot++;
    if(l == r){
        printf("%d ", in[l]);
        return;
    }
    for(int i = l; i <= r; i++)
        if(in[i] == pre[tot]){
            xx(l, i-1);
            xx(i+1, r);
            break;
        }
    printf("%d", pre[tot]);
    if(tot > 1)
        printf(" ");
}

int main()
{
    while(scanf("%d", &n) == 1)
    {
        for(int i = 1; i <= n; i++)
            scanf("%d", &pre[i]);
        for(int i = 1; i <= n; i++)
            scanf("%d", &in[i]);
        tot = 0;
        xx(1, n);
        printf("\n");
    }
}
