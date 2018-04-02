#include<iostream>
#include<algorithm>
int prime[10000];
using namespace std;

int main() {
	int n,min1,max1,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> prime[i];
	}
	min1= max1= prime[0];
	for (int i = 0; i < n; i++)
	{
		min1 = min(min1, prime[i]);
		max1 = max(max1, prime[i]);
		sum += prime[i];
	}
	cout << max1 << endl << min1 << endl << sum;
	return 0;
}