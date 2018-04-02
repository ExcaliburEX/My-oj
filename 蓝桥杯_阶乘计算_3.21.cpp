#include<iostream>
#include<string.h>
using namespace std;

int prime[3000];

int main() {
	int n;
	while (cin >> n) {
		memset(prime, 0, sizeof(prime));
		prime[0] = 1;
		int k = 2999, r = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < 3000; j++)
			{
				int s = prime[j] * i + r;

				prime[j] = s % 10;
				r = s / 10;
			}
		}
		for (int i = 2999; i >= 0; i--)
		{
			if (prime[i])break;
			k--;
		}
		for (int i = k; i >= 0; i--)
		{
			cout << prime[i];
		}
	}
	return 0;
}