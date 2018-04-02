#include<iostream>
int prime[2050];
using namespace std;

int main() {
	int n;
	for (int i = 1990; i <= 2050; i++)
	{
		if (i % 40 == 0 || (i % 4 == 0 && i % 100 != 0))prime[i] = 1;
	}
	while (cin >> n) {
	if (prime[n])cout << "yes";
	else cout << "no";
}return 0;
}