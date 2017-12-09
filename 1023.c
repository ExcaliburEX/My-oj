
#include <stdio.h>
#define N 100
int main()
{
   int i,n;
   double score=0,value=0,a[N],average;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%lf %lf",&a[i],&a[i+1]);	
   
   score+=a[i]*a[i+1];
   value+=a[i];
   }
   average=score/value;
   printf("%.2lf",average);
    
	return 0;
}

