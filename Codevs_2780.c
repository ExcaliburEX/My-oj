/*
题目描述 Description
   可爱的小管在玩吹泡泡。忽然，他想到了一种排序。。。。。。。

输入描述 Input Description
第一行输入n,表示有n个数。（n>=20）

以下n行输入n个数，表示要排序的数（数字长度不超过200）。

输出描述 Output Description
有n行，即这些数从小到大的排序。

样例输入 Sample Input
5

1

2

3

4

5

样例输出 Sample Output
1

2

3

4

5

数据范围及提示 Data Size & Hint
n<=50

每个数字长度不超过200.

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

