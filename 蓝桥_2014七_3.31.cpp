/*
如图所示六角形中，填入1~12的数字。

使得每条直线上的数字之和都相同。

图中，已经替你填好了3个数字，请你计算星号位置所代表的数字是多少？

请通过浏览器提交答案，不要填写多余的内容。
*/
#include<iostream>
#include<algorithm>
using namespace std;
int a[12];
int b[6];
int main() {
	int k = 0;
	for (int i = 2; i <=12 ; i++)
	{
		if (i != 3 && i != 8)a[k++] = i;
	}
	
	do
	{
	/*	b[0] = 1 + a[2] + a[5] + a[7];
	b[1] = 1 + a[3] + a[6] + a[10];
	b[2] = a[7] + a[8] + a[9] + a[10];
	b[3] = 8 + a[2] + a[3] + a[4];
	b[4] = 8 + a[5] + a[8] + 3;
	b[5] = 3 + a[9] + a[6] + a[4];*/
		b[0] = 8 + a[0] + a[7] + 3;
		b[1] = a[8] + 1 + a + a[0] + a[1];
		b[2] = 8 + a[1] + a[2] + a[3];
		b[3] = 1 + a[2] + a[4] + a[5];
		b[4] = 3 + a[3] + a[4] + a[6];
		b[5] = a[5] + a[6] + a[7] + a[8];
		int m, n,flag=1;
		for (m = 0; m <= 4; m++)
		{
			for (n = m + 1; n <= 5; n++) {
				if (b[n] != b[m]) {
					flag = 0;
					break;
				}
			}
			if (!flag)break;
			
		}
		if (m == 5 && n == 6 && flag == 1) {
			for (int i = 0; i < 12; i++) {
				cout << a[i] << " ";
			}
		}
	} while (next_permutation(a,a+9));
	return 0;
}