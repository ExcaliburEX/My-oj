#include<stdio.h>
#include<stdlib.h>  
#include<math.h>  
#include<float.h>
#include<time.h>

#define PI 3.14159265358979323846  /* pi */
#define e 1.0e-12
int main()
{
    double x0 = PI;//取的初始值
    double x1 = 0.0;//有x0算出的x1，初始值先给定0
    double fx = 0.0;//f（x）
    double fxp = 0.0;//f（x）的导数
    double faix = 0.0;//计算结果,牛顿迭代格式 faix =x-(fx/fxp)
    int i = 0;//迭代计算次数
    while (fabs((x0 - x1) / x1) > e)//判断两次迭代变量之间相对误差与精度比较
    {
        x1 = x0;//用x1存放上次的x0
        fx = sin(x0) - x0 / 2;
        fxp = cos(x0) - 0.5;
        faix = x0 - fx / fxp;
        x0 = faix;//将迭代后的结果赋给上次代入值变量，供下一次代入使用
        i++;//计算次数
        printf("第%d次迭代，迭代结果为：,%+.12e  \n", i, x1);
    }
}
