//#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	char b[10], k = 0, a[18] = { '0','1','2','3','4','5','6','7','8','9','10','A','B','C','D','E','F' };
	long n;
	scanf("%d", &n);
	if (n == 0)cout << "0";
	else {
		while (n)
		{
			b[k++] = a[n % 16];
			n /= 16;
		}
	}
	for (int i = k - 1; i >= 0; i--)
	{
		cout << b[i];
	}
	return 0;
	/*printf("%X",n);*/
}