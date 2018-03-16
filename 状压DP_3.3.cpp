/*
有一个N*M(1<=N<=5,1<=M<=1000)的棋盘，
现在有1*2和2*1的小木块无数个，
要想盖满整个棋盘，会有多少种可行的方法？
答案如果大于1,000,000,007
mod1,000,000,007即可。




POJ 3254 	
POJ 3311          
HDU 4539   
POJ 1185 

*/
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int N, M;                    //n,m分别代表棋盘的长宽
long long dp[1005][34];       //dp[I][j]用于存储填充i-1列状态为j时，i列可能出现的方法数
void dfs(int i, int j, int state, int nex) //这里I代表列数，j代表当前位数(也可以说是行数-1，初始时为0)，state代表状态数，nex代表下一列出现的状态
{
    if (j == N)
    {
        dp[i + 1][nex] += dp[i][state];
        return;
    }
    if (((1 << j) & state) > 0)
        dfs(i, j + 1, state, nex); //如果这个位置已经被上一列所/如果这个位置已经被上一列所占用,直接跳过
    if (((1 << j) & state) == 0)
        dfs(i, j + 1, state, nex | (1 << j)); //如果这个位置是空的，尝试放一个左右覆盖1*2的木板
    if (j + 1 < N && ((1 << j) & state) == 0 && ((1 << (j + 1)) & state) == 0)
        dfs(i, j + 2, state, nex); //如果这个位置以及下一个位置都是空的，尝试放一个上下覆盖2*1的木板，而此时要跳过下一个木块
    return;
}
int main()
{
    while (cin >> N >> M)
    {
        memset(dp, 0, sizeof(dp));
        dp[1][0] = 1;                //初始化第一列状态为0的方法数等于1
        for (int i = 1; i <= M; i++) //外层for循环遍历每一列
        {
            for (int j = 0; j < (1 << N); j++) //内层for遍历每一个列的所有状态
                if (dp[i][j])                  //只要dp[i][j]方法数不为空，就执行dfs方法
                {
                    dfs(i, 0, j, 0);
                }
        }
        cout << dp[M + 1][0] << endl; //最后dp[m+1][0]就是结果
    }
}

/*
状压DP常用位运算：
1.判断一个数字x在二进制下第i位是不是等于1。
方法：
if ( ( ( 1 << ( i - 1 ) ) & x ) >0)

解析:将1左移i-1位，相当于制造了一个只有第i位上是1，
其他位上都是0的二进制数,然后用该数与x做与运算，
如果结果>0，说明x第i位上是1，反之则是0。


2.把一个数字x在二进制下的第i位更改成1。

方法：x |= ( 1<<(i-1) )

证明方法与1类似（将1左移i-1位，相当于制造了一个只有第i位上是1，
其他位上都是0的二进制数,然后用该数与x做或运算，只要存在1就为1，
所得结果即为新的x值




*/