#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct node {
	double a, b;
	bool operator<(const node n1)const {
		//�������������node��С�Դ˹���Ƚ�
		return a<n1.a && b>n1.b;
	}
};
int t, n;
int dp[210];	//dp[i]��ʾǰi��node�е������
int main()
{
	while (cin >> t) {
		while (t--) {
			int ans = 1;
			memset(dp, 0, sizeof(dp));	//ʹ��memset��ԭdp��������ݣ���dp���������ֵ��Ϊ0��ʹ�ô˺��������#include<cstring>
			node no[210];
			//����Ϊ���ݳ�ʼ��
			cin >> n;
			for (int i = 0; i < n; i++){
				cin >> no[i].a >> no[i].b;
			}

			for (int i = 0; i < n; i++) {
					//��ʼ����СΪ1��(�������node���κ�����node����Ļ��������Ϊ1)
				for (int j = 0; j < i; j++) {	//�������i֮ǰ�����н��
					//��֮ǰ��ĳ��node�ȵ�ǰ��node��dp[i]��С�Ļ���dp[i]�������ֵ������dp[j]���Ͻڵ�i����dp[j]+1
					//���Ե�ǰ�������ȡdp[i]Ŀǰ��ֵ��dp[j]+1�бȽϴ���Ǹ�
					if (no[j] < no[i])
						dp[i] = max(dp[i], dp[j] + 1);	//ʹ��max���������#include<algorithm>
				}
				//ÿ�����һ���ڵ�ļ���֮�󣬸������ս�����ܵ����ֵ����Ϊ���սڵ㲻һ���������һ���ڵ㣬���Բ�����dp[n-1]��Ϊ���ֵ��
				ans = max(ans, dp[i]);
			}
			cout << ans << endl;
		}
	}
	return 0;
}
