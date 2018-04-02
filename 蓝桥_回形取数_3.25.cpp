#include<iostream>
#include<iomanip>
using namespace std;
int num[200][200];
int main() {
	int m = 100, n = 100;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> num[i][j];
	}


	int a = 0, b = 0, tot = 0;

	while (tot < m*n) {
		while (a < m && num[a][b] != -1) {
			cout << num[a][b] << " ";
			num[a][b] = -1;
			tot++;
			a++;
		}
		a--;
		b++;
		while (b < n&& num[a][b] != -1) {
			cout << num[a][b] << " ";
			num[a][b] = -1;
			tot++;
			b++;
		}
		b--;
		a--;
		while (a >=0 & num[a][b] != -1) {
			cout << num[a][b] << " ";
			num[a][b] = -1;
			tot++;
			a--;
		}
		a++; b--;
		while (b >=0 && num[a][b] != -1) {
			cout << num[a][b] << " ";
			num[a][b] = -1;
			tot++;
			b--;
		}
		b++; a++;
	}
	return 0;

}

