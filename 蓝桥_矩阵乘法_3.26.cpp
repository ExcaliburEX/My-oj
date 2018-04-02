#include<iostream>
typedef long long int ll;
ll c[40][40];
ll prime[40][40], b[40][40];
using namespace std;
int main() {
	int n, m;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> prime[i][j];
			b[i][j] = prime[i][j];
		}
	}
	if (m == 0){
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j)b[i][j]=0;
				else b[i][j] = 1;
			}
		}
	}
	else {
		while (--m) {
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					int k = n;
					while (k) {
						c[i][j] += b[i][k - 1] * prime[k - 1][j];
						k--;
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					b[i][j] = c[i][j];
					c[i][j] = 0;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << b[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}