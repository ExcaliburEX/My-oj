#include<stdio.h>

int main(){
	
	int i,j,k,tmp,n=10;
	int a[10]={5,6,4,8,5,6,13,42,12,20};
	
	
	
	for(i=0;i<n-1;i++){
		j=i;
		for(k=i+1;k<n;k++)
		if(a[k]<a[j]) j=k;
		if(j!=i){
			tmp=a[i];a[i]=a[j];a[j]=tmp;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
