#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<cstring>
using namespace std;

map<string, int>mp;
int t;
int n;
string str1[1000005];
string str2[1000005];
string a, b;
int vis[1000005];

int main()
{
	while (cin >> t) {
		while (t--) {
			int flag = 0;
			memset(vis, 0, sizeof(vis));
			mp.clear();
			cin >> n;
			for (int i = 1; i <= n; i++) {
				cin >> a;
				str1[i] = a;
				mp.insert(pair<string, int>{a, i});
			}
			for (int i = 1; i <= n; i++) {
				cin >> b;
				str2[i] = b;
			}
			for (int i = 1; i <= n; i++) {
				if (vis[i])continue;
				if (flag)cout << " ";
				vis[i] = 1;
				int to, cnt = 1;
				string no1 = str1[i], no2 = str2[i];
				if (no1.compare(no2) == 0) {
					flag = 1;
					cout << 1; continue;
				}
				else {
					to = mp[no2];
					while (no1.compare(str1[to]) != 0) {
						vis[to] = 1;
						cnt++;
						to = mp[str2[to]];
					}
					cout << cnt;
					flag = 1;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
