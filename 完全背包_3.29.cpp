#include <cstdio>  
#include <cstring>  
#define max(a,b) a>b?a:b  
const int maxn=50001;  
int dp[maxn];  
int main()  
{  
    int n,m,v,i,j,c,w;  
    scanf("%d",&n);  
    while(n--)  
    {  
      memset(dp,-10000,sizeof(dp));//这里也要注意，在01背包中初始化给的是0，这里要初始化一个比较大的负数  
      dp[0]=0;//这里也要注意，没有这个就会wa  
      scanf("%d%d",&m,&v);  
      for(i=1;i<=m;i++)  
      {  
          scanf("%d%d",&c,&w);  
          for(j=c;j<=v;j++)  
                dp[j]=max(dp[j],dp[j-c]+w);//状态转移方程也和01背包一致  
      }  
      if(dp[v]<0) printf("NO\n");  
       else  printf("%d\n",dp[v]);  
    }  
    return 0;  
}  
