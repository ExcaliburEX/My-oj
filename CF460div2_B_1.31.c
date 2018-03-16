#include<stdio.h>
#define maxn 10000

int a[maxn];

int main(){
	int k,s=0,cnt=0,p,p1;
	scanf("%d",&k);
	
		for(long i=1;i<1e15;i++){
			s=0;
			 p=i;
			 p1=i;
			while(p){
				s+=p%10;
				p=p/10;
			}		
			if(s==10)cnt++;
			if(cnt==k)break;
		}
		printf("%d",p1);
	
	return 0;
}
