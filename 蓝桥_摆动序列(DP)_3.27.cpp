#include <cstdio>  
#include <iostream>  
/*
dfs深搜+枚举判断
每一个数据可以多次使用，所以需要回溯。先用DFS深搜将可能的结果找出来，然后用if条件进行判断
当只有两个数的时候一定成立，直接加一就可以否则就要满足 ：(data[t-2]-data[t-3])*(data[t-1]-data[t-3])<0
现在解释一下，为什么不需要从头开始将条件判断过来，只需要判断刚刚放进去的数能不能满足就可以。
当既不满足t==2又不满足 (data[t-2]-data[t-3])*(data[t-1]-data[t-3])<0条件时，我们直接返回了，没有进行下面的运算，
前面的不满足后面无论满足与否都不需要考虑。
接下来再解释一下为什么不需要判断t的值和n的值得关系。
当t=n+1；时，我们判断的还是前n个数，进入循环以后会发现所有的数都被标记了，没有可以使用的数，会被直接return回去
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