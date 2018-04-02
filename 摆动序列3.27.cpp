#include<iostream>
#include<stdlib.h>
using namespace std;
int a[25],ans,n;
int visit[25];

int Iscan(int num,int k){
	if(k==1||k==2)return 1;
	if(a[k-1]<a[k-2]&&num>a[k-2])return 1;
	if(a[k-1]>a[k-2]&&num<a[k-2])return 1;
	 return 0;
}

void dfs(int cur){
	if(cur>n)return ;
	
	for(int i=1;i<=n;i++){
		if(!visit[i]&&Iscan(i,cur)){
			visit[i]=1;
			a[cur]=i;
			if(cur>=2){
				ans++;
				for(int i=1;i<=cur;i++){
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
			dfs(cur+1);
			visit[i]=0;
		}
	}
}


int main(){
	
	cin>>n;
	dfs(1);
	cout<<ans<<endl;
	return 0;
}
