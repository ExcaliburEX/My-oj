#include<iostream>
using namespace std;
int prime[10000];

void primelist(){
	prime[0] = prime[1] = 1;
	for (int i = 2; i < 10000; i++)
	{
		if (!prime[i]) {
			for (int j = 2*i; j < 10000; j+=i)
			{
				prime[j] = 1;
			}
		}
	}
}

int main() {
	int a, b;
	primelist();
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		int k = i;
		int flag = 0;
		cout << i << "=";
		while(k!=1) {
			for (int j = 2; j <= k; j++)
			{
				if (!(prime[j]) && k%j == 0) {
					k /= j;
					if (flag)cout << "*";
					cout << j;
					flag = 1;
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}