#include <stdio.h>
#include<stdbool.h>
#define N 100

int max1(int a[],int len)
{
	int maxid= 0;
	int i;
	for	(i=1;i<len;i++)
	{
		if(a[i]<a[maxid])
		{
			maxid=i;
		}
	}
	return maxid;
}

int main()
{
	int a[N],i,n,max,min,sum=0,j=0,t=0;
	
	bool flag=false;
	scanf("%d",&n);
		int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		max=a[0];
		min=a[0];
	}
	for(i=0;i<n;i++){
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
		sum+=a[i];
	}
	printf("%d\n",sum);
		printf("%d\n",max);
		printf("%d\n",min);
		
	for(i=0;i<n-1;i++){
		if(a[i]!=a[i+1]){
	      flag=true;
		
		}
	}
	if(flag){
	
		for(i=n-1;i>0;i--){
		int maxid=max1(a,i+1);
		int t=a[maxid];
		a[maxid]=a[i];
		a[i]=t;
			}
		
		for(i=0;i<n;i++){
			if(a[i]!=a[i-1]){
			
			printf("%d\n",a[i]);
}
	}
	
}else{
	printf("%d",a[0]);
}
	
    return 0;
}

