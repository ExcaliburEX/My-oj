#include<iostream>

using namespace std;
int prime[34][34];
int main() {
	prime[0][0] = 1;
	prime[1][0] = prime[1][1] = 1;
	for (int i = 2; i<34; i++)
		for (int j = 0; j<i + 1; j++) {
			if (j == 0)prime[i][j] = 1;
			else if (j == i + 1)prime[i][j] = 1;
			else { prime[i][j] = prime[i - 1][j - 1] + prime[i - 1][j]; }
		}
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			if (prime[i][j] != 0)cout << prime[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}