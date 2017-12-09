#include<stdio.h>

int main(){
	
	int n,i,j,sum=0,k=0;
	scanf("%d\n",&n);
	int a[n][2],b[n];
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
		scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0;i<n;i++){
		b[i]=a[i][0]*a[i][1];	
	}
	
	for(i=0;i<n;i++){
		if(b[i]>=b[k]){
			k=i;
		}
		
		
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
		
		
	}
	
	
	
	printf("%d",k+1);
	return 0;
	
	
	
	
}
