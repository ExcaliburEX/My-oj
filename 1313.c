
#include <stdio.h>

int main()

{

    long a, b; 

    char c;

    scanf("%ld %ld\n%c", &a, &b, &c);

    switch(c)

    {

        case '+':printf("%ld",a+b);break;

        case '-':printf("%ld",a-b);break;

        case '*':printf("%ld",a*b);break;

        case '/':printf("%ld",a/b);break;

    }

    return 0;

}
