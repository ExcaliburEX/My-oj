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
            dp[i][j]=INF;   //初始化状态数组  
    for(i=1,cur=strlen(num);i<=cur;i++)  
        dp[0][i]=sum[i]=sum[i-1]*10+num[i-1]-'0';//用sum记录前i项表示的数字顺便维护加号数为0时的状态数组  
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
