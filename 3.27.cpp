#include<iostream>
using namespace std;
int a[10000];
void primelist() {
	a[0] = a[1] = 1;
	for (int i = 2; i < 10000; i++)
	{
		if (!a[i]) {
			for (int j = 2*i; j < 10000; j+=i)
			{
				a[j] = 1;
			}
		}
	}
}
int main() {
	int a, b,j=2;
	primelist();
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		cout << i << "=";
		while (i != 1) {
			cout << "*";
			if (!a[j]) {
				while (i%j == 0) {
					cout << j;
					i /= j;
				}
				j++;
			}
		}
	}
	return 0;
}
