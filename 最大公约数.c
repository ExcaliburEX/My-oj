#include<stdio.h>

int main(){
	int a=26,b=38,r=a%b;
	do{

	a=b;
	b=r;
		r=a%b;
		printf("a=%d,b=%d,r=%d\n",a,b,r);
}while(r!=0);


	
	
}
