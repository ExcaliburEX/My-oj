/*
题目描述 Description
三个农民每天清晨5点起床，然后去牛棚给3头牛挤奶。第一个农民在300时刻(从5点开始计时，秒为单位)给他的牛挤奶，一直到1000时刻。第二个农民在700时刻开始，在 1200时刻结束。第三个农民在1500时刻开始2100时刻结束。期间最长的至少有一个农民在挤奶的连续时间为900秒(从300时刻到1200时刻)，而最长的无人挤奶的连续时间(从挤奶开始一直到挤奶结束)为300秒(从1200时刻到1500时刻)。

你的任务是编一个程序，读入一个有N个农民(1 <= N <= 5000)挤N头牛的工作时间列表，计算以下两点(均以秒为单位):

	最长至少有一人在挤奶的时间段。
	最长的无人挤奶的时间段。 
输入描述 Input Description
Line 1:

一个整数N。

Lines 2..N+1:

每行两个小于1000000的非负整数，表示一个农民的开始时刻与结束时刻。

输出描述 Output Description
一行，两个整数，即题目所要求的两个答案。

样例输入 Sample Input
3
300 1000
700 1200
1500 2100
　

样例输出 Sample Output
900 300

数据范围及提示 Data Size & Hint


*/


#include<stdio.h>
int a[1000000]={0};
int main()
{
    int i,j,n,s1,s2,max=0,min=1000000,max1=0,max2=0,count1=0,count2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&s1,&s2);
        for(j=s1;j<s2;j++)
            a[j]=1;
        if(max<s2)
            max=s2;
        if(min>s1)
            min=s1;
    }
    for(i=min;i<max;i++)
    {
        if(a[i]==1)//只要有人工作就行 
        {
            count2=0;
            count1++;
            if(max1<count1)
                max1=count1;
        }
        else//必须没人工作 
        {
            count1=0;
            count2++;
            if(max2<count2)
                max2=count2;            
        }
    }
   if(max1<count1)
       max1=count1;
    if(max2<count2)
        max2=count2;
    printf("%d %d",max1,max2);
    return 0;
} 


