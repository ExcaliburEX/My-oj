#include<stdio.h>  
#include<iostream>  
#include<cstring>  
#include<math.h>  
#include<algorithm>  
#include<queue>  

using namespace std;
char time[66][20] = {
	"zero","one","two","three","four","five","six","seven","eight","nine","ten",
	"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
	"","","","","","","","","","thirty","","","","","","","","","","forty","","","","","","","","","","fifty",
};

int main()
{
	//  freopen("D:\\in.txt","r",stdin);  
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		if (m == 0)
		{
			if (n <= 20)
			{
				printf("%s o'clock\n", time[n]);
			}
			else
			{
				n -= 20;
				printf("twenty %s o'clock\n", time[n]);
			}
		}
		else
		{
			if (n <= 20)
			{
				printf("%s ", time[n]);
			}
			else
			{
				n -= 20;
				printf("twenty %s ", time[n]);
			}
			if (m <= 20 || m == 30 || m == 40 || m == 50)
			{
				printf("%s\n", time[m]);
			}
			else
			{
				int x1 = m % 10;
				int x2 = m / 10;
				x2 *= 10;
				printf("%s %s\n", time[x2], time[x1]);
			}
		}
	}
	return 0;
}