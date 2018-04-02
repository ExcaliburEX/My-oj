#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct node {
	double a, b;
	bool operator<(const node n1)const {
		//重载运算符，即node大小以此规则比较
		return a<n1.a && b>n1.b;
	}
};
int t, n;
int dp[210];	//dp[i]表示前i个node中的最长序列
int main()
{
	while (cin >> t) {
		while (t--) {
			int ans = 1;
			memset(dp, 0, sizeof(dp));	//使用memset还原dp数组的数据，将dp数组的所有值设为0，使用此函数需包含#include<cstring>
			node no[210];
			//以上为数据初始化
			cin >> n;
			for (int i = 0; i < n; i++){
				cin >> no[i].a >> no[i].b;
			}

			for (int i = 0; i < n; i++) {
					//初始化大小为1，(即如果此node比任何其他node都大的话，最长序列为1)
				for (int j = 0; j < i; j++) {	//这里遍历i之前的所有结果
					//当之前的某个node比当前的node（dp[i]）小的话，dp[i]处的最大值可能是dp[j]加上节点i，即dp[j]+1
					//所以当前的最长序列取dp[i]目前的值与dp[j]+1中比较大的那个
					if (no[j] < no[i])
						dp[i] = max(dp[i], dp[j] + 1);	//使用max函数需包含#include<algorithm>
				}
				//每次完成一个节点的计算之后，更新最终结果可能的最大值（因为最终节点不一定包含最后一个节点，所以不能以dp[n-1]作为最大值）
				ans = max(ans, dp[i]);
			}
			cout << ans << endl;
		}
	}
	return 0;
}
