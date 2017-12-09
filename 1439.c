
#include <stdio.h>
int main()
{
 	int prime=0,a,b,i,j,oi;
 	scanf("%d%d",&a,&b);
 	for(i=a;i<b;i++){
 		oi=i;
 		for(j=2;j<oi;j++){
 			if(i%j==0)break;	
		 }
		 if(j==i)prime++;	
	 }
	 
	 printf("%d",prime);
	 
    return 0;
}

