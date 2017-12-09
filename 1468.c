#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float p,s;
	scanf("%d %d %d",&a,&b,&c);
	
	if((a+b<=c)||(a+c<=b)||(b+c<=a)){
	printf("No answer");
}
	else  {
		
		p=1.0*(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2f",s);
	}
    return 0;
}

