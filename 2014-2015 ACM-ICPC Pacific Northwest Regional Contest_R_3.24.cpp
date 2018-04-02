/*
���⣺��һ�����֣��ַ�����������λ��������80λ���ж�������Ƿ���Ramp Number��������ÿһλ�Ƿ񶼴��ڵ���ǰһλ�����֣�
����ǣ���������Ramp NumberС��Ramp Number �ĸ������������-1
˼·����Ԥ����10^81���ڵ����У�ÿһλ��Ӧ��Ramp Number�ĸ�����Ȼ���������������жϣ����������
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

ll num[100][10];	//num[i][j]��ʾλ��Ϊi�����֣�������jΪ��ͷʱ��Ӧ��Ramp Number �ĸ���
ll sum[100];		//sum[i]��ʾλ��Ϊi�����ֶ�Ӧ��Ramp number�ĸ������ܺ�
string str;			//���ַ����������֣�����Ų���10^80�������
int len, t;
ll ans;

bool check(string s) {	//�ж������Ƿ���Ramp Number��������Ƿ���false
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
	for (int i = 0; i < 10; i++)num[1][i] = 1;	//�ȴ���λ��Ϊ1�����ֶ�Ӧ��Ramp Number�ĸ�����0Ϊ1������Ϊi+1
	for (int i = 2; i <= 81; i++) {		//i��ʾ����λ��
		for (int j = 1; j <= 9; j++) {	//j��ʾiλ���ֵĿ�ͷ���֣�����λ����Ϊ1ʱ��ͷ���ֲ���Ϊ0
			for (int k = j; k <= 9; k++) {
				//�õ��Ƶķ����������λ������1�����ֶ�Ӧ��Ramp Number
				//��ΪRamp Number����������ǵ�ǰλ�����ֲ�С��ǰһλ���֣���������λ��Ϊi��
				//��ͷ����Ϊj��Ramp Number����Ϊ����λ��Ϊi-1����j<=��ǰj��num[i][k]���ܺͣ�����kȡֵΪj~9���õ�һ�µ��ƹ�ʽ
				num[i][j] += num[i - 1][k];
			}
		}
	}
	for (int i = 1; i <= 81; i++)
		//��num[i][1] ~ num[i][9]��ӣ���Ϊsum[i]
		for (int j = 1; j <= 9; j++)
			sum[i] += num[i][j];
	sum[1]++;	//num[1][0]Ϊ1��������sum�ļ���û�а���0������sum[1]++
	cin >> t;
	while (t--) {
		ans = 0;
		cin >> str;
		if (str.length() == 1) {	//�ж�����λ��Ϊ1�����
			if (str[0] == '0') {
				cout << 1 << endl;
				continue;
			}
			cout << str << endl;
			continue;
		}
		if (!check(str)) {		//�����������ֲ���Ramp Number��ֱ�����-1
			cout << -1 << endl;
			continue;
		}
		len = str.length();		//lenΪ���ֵ�λ��
		/*
		��ÿ�����ִ���ľ���˼·Ϊ���ȼ���λ��С��len������Ramp Number�ĸ�����Ȼ��Դ���10^(len-1)��Rump Number�������д���
		���磺2569��λ��Ϊ4�������ȼ���������λ����Ramp Number�ĸ�����Ȼ���жϴ���1000��С��2569��Ramp Number�ĸ���
		�жϷ������ӵ�һλ��ʼ����һλΪ2�����Լ���1000~2000֮���Ramp Number�ĸ�������num[4][1]��
		Ȼ���¼��ǰλ�����ִ�С2��������һλ�жϣ�Ramp NumberҪ���һλ��С��ǰһλ�����Լ�¼��ǰλ����֮�������һλ�жϣ���
		Ȼ���жϵڶ�λ����5��������2000~2500֮���Ramp Number�ĸ�������Ϊǰһλ����Ϊ2�����Ծ����ж�2200~2500֮���Ramp Number����
		����������е�Ramp Number������200~500֮��ĸ�����ͬ������ansҪ����num[3][2]+num[3][3]+num[3][4]��Ȼ�������һλ�жϣ��Դ�����
		*/
		for (int i = 1; i < len; i++) {		//����λ��С��len������Ramp Number�ĸ���
			ans += sum[i];
		}
		int lv = 1;		//lv��¼��һλ���ֵ�ֵ����ʼ��Ϊ1
		for (int i = 0; i < len; i++) {
			int nm = str[i] - '0';		//nm��ʾ��ǰλ���ֵ�ֵ
			for (int j = lv; j < nm; j++)	//ans���϶�Ӧλ����Ramp Number�ĸ���
				ans += num[len - i][j];
			lv = nm;		//��¼��ǰλ���֣�������һλ�ж�
		}
		cout << ans << endl;
	}
	return 0;
}
