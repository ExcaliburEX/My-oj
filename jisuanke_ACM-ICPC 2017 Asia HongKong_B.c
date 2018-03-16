#include<stdio.h>
#include<string.h>
int main(){
	int n,N=1,K,x1,y1,x2,y2,ans=0;
	int a[N][N];
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&N,&K);
	
		while(K--){
			
			scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
			for(int i=x1;i<=x2+1;i++){
				for(int j=y1;j<=y2+1;j++){
					if(a[i][j]){
					
					a[i][j]=0;
				
				}else{
					a[i][j]=1;
				}
			}
			
		}
	}
	
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
		if(a[i][j])	ans++;
		printf("%d",ans);
	
	return 0;
}
}
