#include<stdio.h>

int a[1000000],b[1000000];
int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int n,m,num=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int i=0,j=0;
	int x1=a[0],y1=b[0];
	while(i<n)
	{
		if(x1==y1){
			num++;
			i++;
			j++;
			x1=a[i];
			y1=b[j];
		}
	 	while(x1>y1){
		    j++;
			y1+=b[j];
		}
		while(x1<y1){
			i++;
			x1+=a[i];	
		}	
	}
	printf("%d",num);
	return 0;
}
