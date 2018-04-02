#include<iostream>
using namespace std;

void print(int n) {
	if (n == 1)cout << "A";
	else {
		print(n - 1);
		cout << char('A' + n - 1);
		print(n - 1);
	}
}

int main() {
	int N;
	while (cin >> N) {
		print(N);
	}
	return 0;
}