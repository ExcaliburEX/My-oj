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
      memset(dp,-10000,sizeof(dp));//����ҲҪע�⣬��01�����г�ʼ��������0������Ҫ��ʼ��һ���Ƚϴ�ĸ���  
      dp[0]=0;//����ҲҪע�⣬û������ͻ�wa  
      scanf("%d%d",&m,&v);  
      for(i=1;i<=m;i++)  
      {  
          scanf("%d%d",&c,&w);  
          for(j=c;j<=v;j++)  
                dp[j]=max(dp[j],dp[j-c]+w);//״̬ת�Ʒ���Ҳ��01����һ��  
      }  
      if(dp[v]<0) printf("NO\n");  
       else  printf("%d\n",dp[v]);  
    }  
    return 0;  
}  
