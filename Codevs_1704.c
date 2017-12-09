/*
题目描述 Description
桌面上有一叠牌，从第一张牌(即位于顶面的牌)开始从上往下依次编号为1~n.当至少还剩两张排时进行一下操作：把第一张牌扔掉，然后把新的第一张牌放到整叠牌的最后。输入n。输出每次扔掉的牌，以及最后剩下的牌。。

输入描述 Input Description
输入n

输出描述 Output Description
输出每次扔掉的牌，以及最后剩下的牌

样例输入 Sample Input
7

样例输出 Sample Output
1 3 5 7 4 2 6


*/





#include<stdio.h>
int n,a[10000000],t=0;



int main()

{
int i;
scanf("%d",&n);

for( i=1;i<=n;i++)

a[i]=i;

for( i=1;i<=n;i++)

{

printf("%d ",a[i+t]);

a[n+t+1]=a[i+t+1];

t++;

}

return 0;

}
