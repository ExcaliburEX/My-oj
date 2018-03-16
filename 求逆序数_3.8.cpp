
#include <stdio.h>
#include <string.h>
#include <algorithm>
int T, n;
using namespace std;
struct node
{
    int pos, x;
}a[10];
int b[10];

int sum[50001];

bool cmp(node x,node y)
{
    return x.x < y.x;
}

void update(int pos, int val)
{
    while (pos <= n)
    {
        sum[pos] += val;
        pos += (pos & (-pos));
    }
}

int query(int pos)
{
    int rec = 0;
    while (pos > 0)
    {
        rec += sum[pos];
        pos -= (pos & (-pos));
    }
    return rec;
}

int main()
{
//  序列为1-n连续的情况下 
//	int nxs=0;
//	scanf("%d",&n);
//	for(int i=1,x;i<=n;i++)
//	{
//		scanf("%d",&x);
//		update(x,1);
//		int temp=query(x);
//		nxs+=x-temp;
//	}
//	printf("%d\n",nxs);
	
    int nxs=0;
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        scanf("%d", &a[i].x);
        a[i].pos = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n;i++)
    {
        b[a[i].pos] = i;
    }
    for(int i=1;i<=n;i++)
    {
    		update(b[i],1);
    		int temp=query(b[i]);
    		nxs+=b[i]-temp;
	}
    printf("%d\n",nxs);
}
