#include<cstdio>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
const int maxn=40000+5;  
  
int n;  
long long dp[maxn];  
  
int main()  
{  
    //初始化  
    memset(dp,0,sizeof(dp));  
    dp[0]=1;  
  
    //递推  
    for(int i=1;i<=3;i++)  
        for(int j=i;j<maxn;j++)  
            dp[j] += dp[j-i];  
  
    //输出结果  
    while(scanf("%d",&n)==1)  
        printf("%I64d\n",dp[n]);  
    return 0;  
}  
