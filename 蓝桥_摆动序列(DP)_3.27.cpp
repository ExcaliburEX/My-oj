#include <cstdio>  
#include <iostream>  
/*
dfs����+ö���ж�
ÿһ�����ݿ��Զ��ʹ�ã�������Ҫ���ݡ�����DFS���ѽ����ܵĽ���ҳ�����Ȼ����if���������ж�
��ֻ����������ʱ��һ��������ֱ�Ӽ�һ�Ϳ��Է����Ҫ���� ��(data[t-2]-data[t-3])*(data[t-1]-data[t-3])<0
���ڽ���һ�£�Ϊʲô����Ҫ��ͷ��ʼ�������жϹ�����ֻ��Ҫ�жϸոշŽ�ȥ�����ܲ�������Ϳ��ԡ�
���Ȳ�����t==2�ֲ����� (data[t-2]-data[t-3])*(data[t-1]-data[t-3])<0����ʱ������ֱ�ӷ����ˣ�û�н�����������㣬
ǰ��Ĳ������������������񶼲���Ҫ���ǡ�
�������ٽ���һ��Ϊʲô����Ҫ�ж�t��ֵ��n��ֵ�ù�ϵ��
��t=n+1��ʱ�������жϵĻ���ǰn����������ѭ���Ժ�ᷢ�����е�����������ˣ�û�п���ʹ�õ������ᱻֱ��return��ȥ
*/
using namespace std;
const int maxx = 22;
int book[maxx], data1[maxx];
int sum, n;
void bfs(int t)
{
	if (t>1)
	{
		if (t == 2)
		{
			sum++;
		}

		else
		{
			int flag = 1;
			for (int i = t - 1; i >= 2; i--)
			{
				if ((data1[i - 1] - data1[i - 2])*(data1[i] - data1[i - 2]) >= 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				sum++;
			}
			else
			{
				return;
			}
		}

	}

	for (int i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			data1[t] = i;
			book[i] = 1;
			bfs(t + 1);
			book[i] = 0;	
		}
	}
	return;
}

int main()
{

	cin >> n;
	sum = 0;
	bfs(0);
	cout << sum << endl;
	return 0;

}