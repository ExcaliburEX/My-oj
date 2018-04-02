#include<iostream>
#include<algorithm>

using namespace std;
int prime[200];

int main() {
	int n, i = 0;
	cin >> n;
	int n0 = n;
	while (n--) {
		cin >> prime[i++];

	}
	sort(prime, prime + n0);
	for (int i = 0; i<n0; i++) {
		cout << prime[i] << " ";
	}
	return 0;
}