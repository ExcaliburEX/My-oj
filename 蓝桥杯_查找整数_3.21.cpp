#include<iostream>
int prime[1001];
using namespace std;

int main() {
	int n,m,i=0,k=0;
	cin >> n;
		int n0 = n;
		while (n--)cin >> prime[i++];
		cin >> m;
		for (int j = 0; j < n0; j++)
		{

			if (prime[j] == m)break;
			k++;
		}
		if (k == n0)cout << "-1";

		else { cout << k + 1; }
	
	return 0;
}