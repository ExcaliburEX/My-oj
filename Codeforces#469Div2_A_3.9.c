#include<stdio.h>

int main(){
	int l,r,a;
	int T=0;
	scanf("%d%d%d,",&l,&r,&a);
	 if(l>r)
	{
		int l1=l,r1=r,a1=a;
		r1+=a1;
		if(r1<l1)T=2*r1;
		else if(r1>l1)
		{
		if((r1-l1)%2==0)T=2*(l1+(r1-l1)/2);
		else T=2*(l1+(r1-l1-1)/2);
		}
		else T=2*l1;
	}
	 if(l<r)
	{
		int l1=l,r1=r,a1=a;
		l1+=a1;
		if(l1<r1)T=2*l1;
		else if(l1>r1)
		{
			if((l1-r1)%2==0)T=2*(r1+(l1-r1)/2);
		else T=2*(r1+(l1-r1-1)/2);
		}
		else T=2*l1;
	}
	 if(l==r)
	{
			int l1=l,r1=r,a1=a;
			if(a1%2==0)T=2*(l1+a1/2);
			else T=2*(l1+(a1-1)/2);
	}
	if((l==0&&a==0)||(r==0&&a==0)||(l==0&&a==0&&r==0)||(l==0&&r==0&&(a%2!=0)))T=0;
	printf("%d",T);
	return 0;
} 
