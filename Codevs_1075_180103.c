/*

题目描述 Description
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤100），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。

输入描述 Input Description
有2行，第1行为1个正整数，表示所生成的随机数的N个数：

 

第2行有N个用空格隔开的正整数，为所产生的随机数

 

输出描述 Output Description
第1行为1个正整数M，表示不相同的随机数的个数。第2行为M个用空格隔开的正整数，为从小
到大排好序的不相同的随机数。
样例输入 Sample Input
10

20 40 32 67 40 20 89 300 400 15

样例输出 Sample Output
8

15 20 32 40 67 89 300 400

 

数据范围及提示 Data Size & Hint
*/
#include <stdio.h>

#include <stdlib.h>



int main()
{
    int n,i,c,m;
    scanf("%d",&n);
    int a[n];
    int *min,*max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	    for(m=0;m<n-1;m++)
	    {
	    min=&a[0];max=&a[n-m-1];
	      for(;min<max;min++)
	       {
	           if(*min<*max) ;
	           else if(*min>*max)
	           {
	              c=*min;
	               *min=*max;
	               *max=c;
	           }
	           else if(*min==*max) {*min=-1;}
	       }
	    }
	    
    for(i=0,m=0;i<n;i++)
    {
        if(a[i]!=-1) m++;
    }
    printf("%d\n",m);
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1) {printf("%d",a[i]);printf(" ");}
    }
    return 0;
}
