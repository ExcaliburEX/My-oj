#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main() {
	string a, b;
	int flag = 0;
	getline(cin,a);
	getline(cin,b);
	int len1 = a.length();
	int len2 = b.length();
	if (len1 != len2) {
		cout << "1";
		return 0;
	}
	for (int i = 0; i < len1; i++)
	{
		if (!a.compare(b))flag = 1;
	}
	if (flag) { cout << "2"; return 0; }

	for (int i = 0; i < len1; i++)
	{
		if (a[i] >= 'A'&&a[i] <= 'Z')a[i] = tolower(a[i]);
		if (b[i] >= 'A'&&b[i] <= 'Z')b[i] = tolower(b[i]);
		if (a[i] != b[i]) { flag = 2; break; }
		
	}
	if (flag == 2) {
		cout << "4";
		return 0;
	}
		cout << "3";
		return 0;


}