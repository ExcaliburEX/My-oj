/**
 * Problem Description

某国为了防御敌国的导弹袭击,发展出一种导弹拦截系统.但是这种导弹拦截系统有一个缺陷:虽然它的第一发炮弹能够到达任意的高度,但是以后每一发炮弹都不能超过前一发的高度.某天,雷达捕捉到敌国的导弹来袭.由于该系统还在试用阶段,所以只有一套系统,因此有可能不能拦截所有的导弹.
怎么办呢?多搞几套系统呗!你说说倒蛮容易,成本呢?成本是个大问题啊.所以俺就到这里来求救了,请帮助计算一下最少需要多少套拦截系统.


 


Input

输入若干组数据.每组数据包括:导弹总个数(正整数),导弹依此飞来的高度(雷达给出的高度数据是不大于30000的正整数,用空格分隔)


 


Output

对应每组数据输出拦截所有导弹最少要配备多少套这种导弹拦截系统.


 


Sample Input

8 389 207 155 300 299 170 158 65


 


Sample Output

2


 


Source

浙江工业大学第四届大学生程序设计竞赛  

 * 
 * 
 * 
 * **/
//LIS 最长上升子序列 Longest Increasing Subsequence
#include<bits/stdc++.h>
using namespace std;
int a[10010];
int dp[10010];
int main()
{
	int n;

	while(cin>>n&&n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			dp[i]=1;
		}
		int ans=0;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i])
				{
					dp[i]=max(dp[j]+1,dp[i]);
				}
			}
			ans=max(ans,dp[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
 }