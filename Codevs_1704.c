/*
��Ŀ���� Description
��������һ���ƣ��ӵ�һ����(��λ�ڶ������)��ʼ�����������α��Ϊ1~n.�����ٻ�ʣ������ʱ����һ�²������ѵ�һ�����ӵ���Ȼ����µĵ�һ���Ʒŵ������Ƶ��������n�����ÿ���ӵ����ƣ��Լ����ʣ�µ��ơ���

�������� Input Description
����n

������� Output Description
���ÿ���ӵ����ƣ��Լ����ʣ�µ���

�������� Sample Input
7

������� Sample Output
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
