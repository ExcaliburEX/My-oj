#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a[10010];
int dp[10010];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
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
		printf("%d\n",ans);
	}
	return 0;
 } 
