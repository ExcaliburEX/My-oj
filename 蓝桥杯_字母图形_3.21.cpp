#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char a[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char b[25];
	for (int i = 0; i < 25; i++)
	{
		b[i] = a[25 - i];
	}
	char c[51];
	for (int i = 0; i < 51; i++)
	{
		if (i < 25)c[i] = b[i];
		if(i>=25) c[i] = a[i-25];
	}
	
		int n, m;
		while (cin >> n >> m) {
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << c[25 - i + j];
				}
				cout << endl;

			}
		}
	return 0;
}