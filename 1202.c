#include <stdio.h>
# define N 100
int main()
{
    int n,i,a[N],sum=0; 
   scanf("%d",&n);
   
    for(i=0;i<n;i++){
		 scanf("%d",&a[i]);	
		 	sum=sum+a[i];
	}
	printf("%d\n", sum);
    return 0;
}
