/*
生成元：
如果x加上x的各个数字之和得到y，就说x是y的生成元。给出n（1<=n<=100000），求最小生成元。无解输出0、 
*/

#include<stdio.h>
#include<string.h>
#define maxn 100005
int ans[maxn];

int main(){
	int T,n;
	memset(ans,0,sizeof(ans));
	for(int m=1;m<maxn;m++){
		int x=m,y=m;
		while(x>0){
			y+=x%10;
			x/=10;
		}
		if(ans[y]==0||m<ans[y])ans[y]=m;
		
	}
	scanf("%d",&T);
	while(T--){
	
	scanf("%d",&n);
	printf("%d\n",ans[n]);
	}
  	return 0;
}
