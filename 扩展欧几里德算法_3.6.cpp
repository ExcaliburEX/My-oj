/*
用来在已知a,b求解一组x,y使得a*x+b*y=gcd(a,b)解一定存在，根据数论中 的相关定理。扩展欧几里德常用在求解模线性方程及方程组中。

hdu2669
hdu5114
hdu5512
poj1061

欧几里德法
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
*/

#include <stdio.h>

int a=1, b=12, x=3, y=4;

int exgcd(int a,int b, int &x ,int &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    int r = exgcd(b, a % b, x, y);
    int t = x;
    x = y;
    y = t - a / b * y;
    return r;
}

int main()
{
    exgcd(1, 2,x,y);
    return 0;
}