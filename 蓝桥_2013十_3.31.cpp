/*
100 ���Ա�ʾΪ����������ʽ��100 = 3 + 69258 / 714

�����Ա�ʾΪ��100 = 82 + 3546 / 197

ע���������������У�����1~9�ֱ������ֻ����һ�Σ�������0����

���������Ĵ�������100 �� 11 �ֱ�ʾ����

��ĿҪ��
�ӱ�׼�������һ��������N (N<1000*1000)
�������������������1~9���ظ�����©����ɴ�������ʾ��ȫ��������
ע�⣺��Ҫ�����ÿ����ʾ��ֻͳ���ж��ٱ�ʾ����

���磺
�û����룺
100
���������
11

�����磺
�û����룺
105
���������
6

��ԴԼ����
��ֵ�ڴ����� < 64M
CPU���� < 3000ms

���ϸ�Ҫ���������Ҫ��������ش�ӡ���ƣ�����������...�� �Ķ������ݡ�

���д������ͬһ��Դ�ļ��У�����ͨ���󣬿����ύ��Դ�롣

ע��: main������Ҫ����0
ע��: ֻʹ��ANSI C/ANSI C++ ��׼����Ҫ���������ڱ��뻷�������ϵͳ�����⺯����
ע��: ���������ĺ���������ȷ����Դ�ļ��� #include <xxx>�� ����ͨ���������ö�ʡ�Գ���ͷ�ļ���

�ύʱ��ע��ѡ���������ı��������͡�
*/

#include <iostream>
#include <cstring>
using namespace std;
int vis[10];
int old[10];
int check(int x) {
	do {
		int tmp = x % 10;
		if (tmp == 0) {
			return 0;
		}
		vis[tmp]++;
	} while (x = x / 10);
	return 1;
}

int checkOk(void) {
	if (vis[0] != 0) {
		return 0;
	}
	for (int i = 1; i < 10; i++) {
		if (vis[i] != 1) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	int num;
	cin >> num;
	int left, up, down;
	int count = 0;

	for (left = 1; left < num; left++) {
		memset(vis, 0, sizeof(vis));
		if (!check(left)) {
			continue;
		}

		for (down = 1; down < 10000; down++) {
			memcpy(old, vis, sizeof(vis));
			
			if (!check(down)) {
				memcpy(vis, old, sizeof(vis));
				continue;
			}
			up = (num - left) * down;
			if (!check(up)) {
				memcpy(vis, old, sizeof(vis));
				continue;
			}
			if (!checkOk()) {
				memcpy(vis, old, sizeof(vis));
				continue;
			}
			memcpy(vis, old, sizeof(vis));
			cout << left << " + " << up << " / " << down << endl;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
