#include <stdio.h>
#define N 100
int main()
{
   int a[N],i,n,max,min;
   scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
    min=a[0];
	max=a[0];
  }
  for(i=0;i<n;i++){
  	if(a[i]>max){
	  max=a[i];
	  }
  	if(a[i]<min){
	  min=a[i];
  }
}
  printf("%d %d",min,max);
    return 0;
}
