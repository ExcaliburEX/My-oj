
#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
int v[1001],w[1001];
int dp[1001];
int vis[1001][1001]; 
int main(){
	int T,N,V;
	cin>>T;
	while(T--){
	cin>>N>>V;
	memset(v,0,sizeof v);
	memset(w,0,sizeof w);
	memset(dp,0,sizeof dp);
	memset(vis,0,sizeof dp);
	for(int i=1;i<=N;i++){
		cin>>v[i];                   
	}
	for(int i=1;i<=N;i++){
		cin>>w[i];
	}
	
	for(int i=N;i>=1;i--){
		for(int j=V;j>=w[i];j--){
			if(dp[j]<dp[j-w[i]]+v[i]){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			vis[i][j]=1;
		}else vis[i][j]=0;
		}
	}
	for(int i=1,j=V;i<=N&&j>0;i++)  
        {  
            if (vis[i][j])  
            {  
                printf("%d ",i);  
                j -= w[i];  
            }  
        }  
        puts("");  
    }  
		cout<<dp[V]<<endl;

	return 0;
	
}

/*


#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int v[1001],w[1001],item[1001];
int dp[1001][1001];
void FindWhat(int i,int j)//寻找解的组成方式
{
    if(i>=0)
    {
        if(dp[i][j]==dp[i-1][j])//相等说明没装
        {
            item[i]=0;//全局变量，标记未被选中
            FindWhat(i-1,j);
        }
        else if( j-w[i]>=0 && dp[i][j]==dp[i-1][j-w[i]]+v[i] )
        {
            item[i]=1;//标记已被选中
            FindWhat(i-1,j-w[i]);//回到装包之前的位置
        }
    }
}
int main(){
	int T,N,V;
	cin>>T;
	while(T--){
	cin>>N>>V;
	memset(v,0,sizeof v);
	memset(w,0,sizeof w);
	memset(dp,0,sizeof dp);
	for(int i=1;i<=N;i++){
		cin>>v[i];                   
	}
	for(int i=1;i<=N;i++){
		cin>>w[i];
	}
	
	for(int i=1;i<=N;i++){
		for(int j=0;j<=V;j++){
			if(j<w[i])dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
		}
	}
		cout<<dp[N][V]<<endl;
}


	for(int i=0;i<N;i++){
		for(int j=0;j<V;j++){
			FindWhat(i,j);
			if(item[i])cout<<i<<" ";
		}
	}
	return 0;
	
}*/
