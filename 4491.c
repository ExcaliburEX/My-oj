#include<stdio.h>
#include<string.h>
int a[10][10], record2[10];//record2[10]用来标记
int de_row(int i)
{
	int j;
	memset(record2, 0, sizeof(record2));//每次都要初始化标记数组
	for(j = 1; j <= 9; j++)
	{
		if(record2[a[i][j]])//遍历本行所有数字，若已经用过，则不满足数独的规则
		return 0;//只要执行了return，就不会再执行下去 
		record2[a[i][j]] = 1;
	}
		return 1;
}


int de_col(int i)
{
	int j;
	memset(record2, 0, sizeof(record2));
	for(j = 1; j <= 9; j++)
	{
		if(record2[a[j][i]])
		return 0;
		record2[a[j][i]] = 1;
	}
		return 1;
}


int de_three(int m)
{
	int i, j;
	memset(record2, 0, sizeof(record2));
	for(i = m; i < m+3; i++)
{
	for(j = m; j < m+3; j++)
{
	if(record2[a[i][j]])
	return 0;
	record2[a[i][j]] = 1;
}
}
	return 1;
}


int main(void)
{
	int n, i, j, l, b, c, d, k;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
{
	for(j = 1; j <= 9; j++)
	for(k = 1; k <= 9; k++)
	scanf("%d", &a[j][k]);
	for(j = 1; j <=9; j++)
{
	d = de_row(j);
	if(!d)
	break;
	b = de_col(j);
	if(!b)
	break;
}
	if(j == 10)
{
	for(l = 1; l <=9; l += 3)
{
	c = de_three(l);
	if(!c)
	break;
}
	if(l > 9)
	printf("Right\n");
	else
	printf("Wrong\n");
}
else
	printf("Wrong\n");
	getchar();
}
	return 0;
}
