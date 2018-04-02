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
			if (j != i && arr[i][j] == 1)		//以列为单位，统计每个芯片被其它芯片（不包括自己本身）
			{
				count1[j]++;
			}
		}
	}
	for (j = 0; j<n; j++)
	{
		if (count1[j] >= n / 2)		//判断为好的次数，若超过一半或者等于一半则认为此芯片为好芯片。
		{
			cout << j + 1<<" ";
		}
	}
	cout << endl;
	return 0;
}