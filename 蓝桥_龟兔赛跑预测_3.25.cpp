#include<iostream>
using namespace std;

int main() {
	int v1, v2, t, s, l;
	while (cin >> v1 >> v2 >> t >> s >> l){
	int t1 = 0, t2 = 0;
	int s1 = 0, s2 = 0;
	while (s1 < l &&s2 < l) {
		if (s1 - s2 >= t) {
			t2 += s;
			s1 = v1 * t1;
			s2 = v2 * t2;
		}
		else
		{
			t1++; t2++;
			s1 = v1 * t1;
			s2 = v2 * t2;
		}

	}
	if (s1 < s2)cout << "T" << endl << l/v2 << endl;
	else if (s1 == s2)cout << "D" << endl << l/v2 << endl;
	else cout << "R" << endl << t2 << endl;
}
	return 0;
}