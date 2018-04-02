#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cmp1(int a, int b) {
	return a > b;
}
int main() {
	int n,t=0;
	cin >> n;
	vector<int>huffuman;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		huffuman.push_back(tmp);
	}
	int size = huffuman.size();
	while (size >= 2) {
		sort(huffuman.begin(), huffuman.end(), cmp1);
		int s = huffuman[size - 1] + huffuman[size - 2];
		t += s;
		huffuman.pop_back();
		huffuman.pop_back();
		huffuman.push_back(s);
		size = huffuman.size();
	}
	cout << t;
	return 0;
}