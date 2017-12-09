#include <stdio.h>
#define N 100
int main()
{
	int i,n,average,a[N],sum=0,cnt=0;
	//char c=getchar();
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
		if(getchar() == '\n'){
			break;
		}
		sum+=a[i];
		 
	}
	average=sum/n;
	printf("%d",average);
	return 0;
}

