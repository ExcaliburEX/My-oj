//#include <iostream>
//using namespace std;
//
//int c[20], n = 11, cnt = 0;
//void print() {
//	for (int i = 0; i<n; ++i) {
//		for (int j = 0; j<n; ++j) {
//			if (j == c[i]) cout << "1 ";
//			else cout << "0 ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//void search(int r) {
//	if (r == n) {
//		print();
//		++cnt;
//		return;
//	}
//	for (int i = 0; i<n; ++i) {
//		c[r] = i;
//		int ok = 1;
//		for (int j = 0; j<r; ++j)
//			if (c[r] == c[j] || r - j == c[r] - c[j] || r - j == c[j] - c[r]) {
//				ok = 0;
//				break;
//			}
//		if (ok) search(r + 1);
//	}
//}
//int main() {
//	search(0);
//	cout << cnt << endl;
//	return 0;
//}
//
//





//
//#include<iostream>
//#include<math.h>
//using namespace std;
//int a[100],n = 8,cnt= 0;
//
//void print() {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			if (a[i] == j)cout << "1 ";
//			else cout << "0 ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void search(int r) {
//	
//	if (r == n) {
//		print();
//		++cnt;
//		return;
//    }
//	for (int i = 0; i < n; i++) {
//		a[r] = i;
//		int ok = 1;
//		for (int j = 0; j < r; j++) {
//			if (a[j] - a[r] == 0 || fabs(j - r) == fabs(a[j] - a[r])) {
//				ok = 0;
//				break;
//			}
//			
//		}
//		if (ok)search(r + 1);
//	}
//}
//
//
//int main() {
//	search(0);
//	cout << cnt << endl;
//	return 0;
//}




#include<iostream>
#include<math.h>
using namespace std;
int prime[1000],n = 8, cnt = 0;
int d;
void search(int r);
void print();

void print() {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (prime[i] == j)cout << "1 ";
			else cout << "0 ";
		}
		cout << endl;
	}
	cout << endl;
}

void search(int r) {

	if (r == n) {
		print();
		++cnt;
		return;
	}
	for (int i = 0; i < n; i++) {
		prime[r] = i;
		int ok = 1;
		for (int j = 0; j < r; j++) {
			if (prime[j] - prime[r] == 0 || fabs(j - r) == fabs(prime[j] - prime[r])) {
				ok = 0;	
				break;
			}
		}
		if (ok)search(r + 1);
	}
}
int main() {
	
	search(0);
	cout << cnt << endl;
	return 0;
}

