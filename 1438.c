#include <stdio.h>
int main()
{
 	int i,j,n,k;
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
 	
 			for(k=0;k<n-i;k++){
 			printf(" ");
	 }
 		printf("/");
 		for(j=0;j<2*i;j++){
 			printf("_");
		 }
		 printf("\\");
		 printf("\n");

	 }
    return 0;
}
