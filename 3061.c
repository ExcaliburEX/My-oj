#include <stdio.h>
int main()
{
    char c;
    int a,b,ans;
    scanf("%d %d\n%c",&a,&b,&c);
   
    
    
    switch (c){
    	case '+':ans=a+b;break;
    	case '-':ans=a-b;break;
    	case '*':ans=a*b;break;
    	case '/':ans=a/b;break;
    	
	}
	
	printf("%d // %d %c	%d=%d",ans,a,c,b,ans);
    return 0;
}

