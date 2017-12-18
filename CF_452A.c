#include<stdio.h>

int main(){
	long n;
	long ans=0;
	int i,one=0,two=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++){
	if(a[i]==1)one++;
	if(a[i]==2)two++;
	}
	if(two!=0){
		if(two>=one)ans=one;
		else ans=two+(one-two)/3;
	}else ans=one/3;

	printf("%d",ans);
	return 0;
	
}
