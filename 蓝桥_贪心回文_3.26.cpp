#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
/*
n为奇数时，如果已经有一个字符出现的次数为奇数，还找到了一个字符出现的次数为奇数，那么就不能构成回文串；
n为偶数时，只要找到有一个字符出现的次数为奇数，那么就不能构成回文串
*/
int main() {
	int n;
	cin >> n;
	char s[8000];
	scanf("%s", &s);
	int odd = 0;
	int end = n - 1;
	int cnt = 0;
	for (int i = 0; i < end; i++)
	{
		for (int j = end; j >=i; j--)
		{
			if (i == j) {
				if (n % 2 == 0 || odd == 1) {
					cout << "Impossible";
					return 0;
				}
				odd = 1;
				cnt += n / 2 - i;
			}
			else if (s[i] == s[j]) {
				for (int k = j; k < end; k++)
				{
					swap(s[k], s[k + 1]);
					cnt++;
				}
				end--;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}