/*
题意：给一个数字（字符串），数字位数不大于80位，判断这个数是否是Ramp Number，即数字每一位是否都大于等于前一位的数字，
如果是，输出比这个Ramp Number小的Ramp Number 的个数，否则输出-1
思路：先预处理10^81以内的数中，每一位对应的Ramp Number的个数，然后对输入的数进行判断，并计算个数
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

ll num[100][10];	//num[i][j]表示位数为i的数字，以数字j为开头时对应的Ramp Number 的个数
ll sum[100];		//sum[i]表示位数为i的数字对应的Ramp number的个数的总和
string str;			//用字符串储存数字，否则放不下10^80大的数字
int len, t;
ll ans;

bool check(string s) {	//判断数字是否是Ramp Number，如果不是返回false
	int len = s.length();
	int val = s[0] - '0';
	for (int i = 1; i < len; i++) {
		if (val > s[i] - '0')return false;
		val = s[i] - '0';
	}
	return true;
}

int main()
{
	for (int i = 0; i < 10; i++)num[1][i] = 1;	//先处理位数为1的数字对应的Ramp Number的个数，0为1，其他为i+1
	for (int i = 2; i <= 81; i++) {		//i表示数字位数
		for (int j = 1; j <= 9; j++) {	//j表示i位数字的开头数字，数字位数不为1时开头数字不会为0
			for (int k = j; k <= 9; k++) {
				//用递推的方法，计算出位数大于1的数字对应的Ramp Number
				//因为Ramp Number满足的条件是当前位的数字不小于前一位数字，所以数字位数为i，
				//开头数字为j的Ramp Number个数为数字位数为i-1，且j<=当前j的num[i][k]的总和，所以k取值为j~9，得到一下递推公式
				num[i][j] += num[i - 1][k];
			}
		}
	}
	for (int i = 1; i <= 81; i++)
		//将num[i][1] ~ num[i][9]相加，即为sum[i]
		for (int j = 1; j <= 9; j++)
			sum[i] += num[i][j];
	sum[1]++;	//num[1][0]为1，而上面sum的计算没有包括0，所以sum[1]++
	cin >> t;
	while (t--) {
		ans = 0;
		cin >> str;
		if (str.length() == 1) {	//判断数字位数为1的情况
			if (str[0] == '0') {
				cout << 1 << endl;
				continue;
			}
			cout << str << endl;
			continue;
		}
		if (!check(str)) {		//如果输入的数字不是Ramp Number，直接输出-1
			cout << -1 << endl;
			continue;
		}
		len = str.length();		//len为数字的位数
		/*
		对每个数字处理的具体思路为，先加上位数小于len的所有Ramp Number的个数，然后对大于10^(len-1)的Rump Number个数进行处理
		例如：2569，位数为4，所以先加上所有三位数的Ramp Number的个数，然后判断大于1000，小于2569的Ramp Number的个数
		判断方法：从第一位开始，第一位为2，所以加上1000~2000之间的Ramp Number的个数，即num[4][1]，
		然后记录当前位的数字大小2，用于下一位判断（Ramp Number要求后一位不小于前一位，所以记录当前位数字之后进行下一位判断），
		然后判断第二位数字5，即加上2000~2500之间的Ramp Number的个数，因为前一位数字为2，所以就是判断2200~2500之间的Ramp Number个数
		而这个区间中的Ramp Number个数与200~500之间的个数相同，所以ans要加上num[3][2]+num[3][3]+num[3][4]，然后进行下一位判断，以此类推
		*/
		for (int i = 1; i < len; i++) {		//加上位数小于len的所有Ramp Number的个数
			ans += sum[i];
		}
		int lv = 1;		//lv记录上一位数字的值，初始化为1
		for (int i = 0; i < len; i++) {
			int nm = str[i] - '0';		//nm表示当前位数字的值
			for (int j = lv; j < nm; j++)	//ans加上对应位数的Ramp Number的个数
				ans += num[len - i][j];
			lv = nm;		//记录当前位数字，用于下一位判断
		}
		cout << ans << endl;
	}
	return 0;
}
