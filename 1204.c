#include <stdio.h>
int main()
{
    char a[100],s,j,i,b[100],oi;
   
    scanf("%s %s",&a,&b);


	for(i=0;i<100;i++){
		oi=i;
		for(j=0;b[j]!='\0';j++){
			
			if(a[i]!=b[j]){
				break;
			}
			i++;
		}
		if(b[j]=='\0'){
			printf("%d",oi+1);
			break;
		}
		i=oi;
	}

         return 0;
}

