
#include<stdio.h>

int main(){

    double a,b;

    int c,n;

    scanf("%d %lf",&c,&a);

    b=a*c*0.1;

    n=(int)(b/10+0.5)*10;

    printf("%d",n);

    return 0;

}
