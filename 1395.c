
#include <stdio.h>
int main()
{
    int a,cnt=0,i;
    scanf("%d",&a);
    while(a!=0){
    	cnt++;
    	a/=10;
	}
	printf("%d",cnt);
	
    return 0;
}

