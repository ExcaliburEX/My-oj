#include <stdio.h>
#define N 100
int main()
{
   int a[N],i,n,j,max,max1;
   scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  	max1=a[0];	
	  max=a[0];
  }
  for(i=0;i<n;i++){
  	if(a[i]>max){
	  max=a[i];
	  j=i;
	  }
}
for(i=0;i<n;i++){
  	if(i!=j&&a[i]>max1){
	  max1=a[i];
	  }
}
  printf("%d",max1);
    return 0;
}
