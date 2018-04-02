#include<iostream>
#include<set>
#include<cstdio>;
using namespace std;
set<int> A, B, C;
int main() {
	int n, m,a,b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		A.insert(a);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> b;
		B.insert(b);
	}

	set<int>::iterator it;
	for (it=A.begin();it!=A.end();it++)
	{
		if (B.count(*it) != 0)cout << *it << " ";
	}
	cout << endl;

	for (it=A.begin(); it!=A.end(); it++)
	{
		C.insert(*it);
	}
	for (it = B.begin(); it != B.end(); it++)
	{
		C.insert(*it);
	}
	for (it = C.begin(); it != C.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	for (it = A.begin(); it != A.end(); it++)
	{
		if (B.count(*it) == 0)cout << *it << " ";
	}
	return 0;



}