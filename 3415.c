#include<stdio.h> 
#include<string.h>  
#include<math.h>  
#define INF 100000000  
int min(int a,int b);  
int sum[8],dp[9][9];  
int main()  
{  
    int n,k,j,i,cur;  
    char num[9];  
    scanf("%s %d",num,&n);  
    memset(sum,0,sizeof(sum));  
    for(i=0;i<=8;i++)  
        for(j=0;j<9;j++)  
            dp[i][j]=INF;   //��ʼ��״̬����  
    for(i=1,cur=strlen(num);i<=cur;i++)  
        dp[0][i]=sum[i]=sum[i-1]*10+num[i-1]-'0';//��sum��¼ǰi���ʾ������˳��ά���Ӻ���Ϊ0ʱ��״̬����  
    for(i=1;i<n;i++)  
       
        for(j=i+1;j<=cur;j++)  
        {  
            for(k=i;k<j;k++)  
                dp[i][j]=min(dp[i][j],dp[i-1][k]+sum[j]-sum[k]*(int)pow(10,j-k));  
        }  
    printf("%d",dp[n-1][cur]);  
    return 0;  
}  
int min(int a,int b)  
{  
    return a<b?a:b;  
}
