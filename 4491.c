#include<stdio.h>
#include<string.h>
int a[10][10], record2[10];//record2[10]�������
int de_row(int i)
{
	int j;
	memset(record2, 0, sizeof(record2));//ÿ�ζ�Ҫ��ʼ���������
	for(j = 1; j <= 9; j++)
	{
		if(record2[a[i][j]])//���������������֣����Ѿ��ù��������������Ĺ���
		return 0;//ֻҪִ����return���Ͳ�����ִ����ȥ 
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
