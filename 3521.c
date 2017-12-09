#include<stdio.h>

int main(){
	int sum,i,a[100];
	scanf("%d",&sum);
	a[0]=1;
	a[1]=1;
	
	for(i=2;i<100;i++){
		a[i]=a[i-1]+a[i-2];
		if(a[i]>sum){
			printf("%d\n",i);
			printf("%d",a[i-1]);
			break;
		}
	}
	return 0;
} 
