/*
��Ŀ���� Description
   �ɰ���С�����洵���ݡ���Ȼ�����뵽��һ�����򡣡�����������

�������� Input Description
��һ������n,��ʾ��n��������n>=20��

����n������n��������ʾҪ������������ֳ��Ȳ�����200����

������� Output Description
��n�У�����Щ����С���������

�������� Sample Input
5

1

2

3

4

5

������� Sample Output
1

2

3

4

5

���ݷ�Χ����ʾ Data Size & Hint
n<=50

ÿ�����ֳ��Ȳ�����200.

*/


#include <stdio.h>

int max(char a[][],long len){
	int i,maxid=0;
	for(i=0;i<len;i++){
		if(a[i][]>a[maxid]){
			maxid=i;
		}
	}
	return maxid;
	
}



int main()
{
    int n,maxid,i,t;
    char a[][200];
    scanf("%d\n",&n);
      for(i=0;i<n;i++){
      	
      gets(a[i]);
      }
    for(i=n-1;i>0;i--){
    	maxid=max(a,i+1);
    	t=a[maxid];
    	a[maxid]=a[i];
    	a[i]=t; 
	}
	for(i=0;i<n;i++){
		
	puts(a[i]);
}
    return 0;
}

