#include<stdio.h>

int main(){
	int n,a[100],i;
	a[0]=1;
	a[1]=1;
	scanf("%d",&n);
	
	for(i=2;i<100;i++){
		a[i]=a[i-1]+a[i-2];
		if((i+1)==n){
			printf("%d",a[i]);
			break;
		}else if(n==1){
			printf("%d",1);
			break;
		}else if(n==2){
			printf("%d",1);
			break;
	}
		
	
	}
	return 0;
}
