#include<iostream>
#include<string.h>
using namespace std;
int count1[25];
int arr[25][25];
int main()
{
	int n, i, j;
	cin >> n;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (j = 0; j<n; j++)
	{
		for (i = 0; i<n; i++)
		{
			if (j != i && arr[i][j] == 1)		//����Ϊ��λ��ͳ��ÿ��оƬ������оƬ���������Լ�����
			{
				count1[j]++;
			}
		}
	}
	for (j = 0; j<n; j++)
	{
		if (count1[j] >= n / 2)		//�ж�Ϊ�õĴ�����������һ����ߵ���һ������Ϊ��оƬΪ��оƬ��
		{
			cout << j + 1<<" ";
		}
	}
	cout << endl;
	return 0;
}