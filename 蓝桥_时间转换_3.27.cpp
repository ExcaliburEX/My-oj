#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int t1 = t / 60;
	int t2 = t % 60;
	int h = t1 /60;
	int m = t1 % 60;
	cout << h << ":" << m << ":" << t2;
	return 0;
}