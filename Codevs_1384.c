/*
题目描述 Description
13号又是星期五是一个不寻常的日子吗?
13号在星期五比在其他日少吗?为了回答这个问题,写一个程序来计算在n年里13
日落在星期一,星期二......星期日的次数.这个测试从1900年1月1日到
1900+n-1年12月31日.n是一个非负数且不大于400.
这里有一些你要知道的:

	1900年1月1日是星期一.
	4,6,11和9月有30天.其他月份除了2月有31天.闰年2月有29天,平年2月有28天.
	年份可以被4整除的为闰年(1992=4*498 所以 1992年是闰年,但是1990年不是闰年)
	以上规则不适合于世纪年.可以被400整除的世纪年为闰年,否则为平年.所以,1700,1800,1900和2100年是平年,而2000年是闰年.
请不要预先算好数据!

输入描述 Input Description
一个整数n.

输出描述 Output Description
七个在一行且相分开的整数,它们代表13日是星期六,星期日,星期一.....星期五的次数.

样例输入 Sample Input
20

样例输出 Sample Output
36 33 34 33 35 35 34

数据范围及提示 Data Size & Hint
n是一个非负数且不大于400.



*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int GetFebDay(int nYear)
{
    if (nYear % 400 == 0)
        {
            return 29;
        }
    else if (nYear % 100 > 0 && nYear % 4 == 0)
        {
            return 29;
        }
     return 28;
}


int main()
{
    int ayMon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ayWeek[7] = {};//星期日，星期一，...
    int nStartWeek = 1;//开始为星期1
    int nTotalDays = 0;
    int n;
    int i,j;
    scanf("%d", &n);

    int nYear;
    for ( i = 0; i < n; i++)//年
   {
        nYear = 1900 + i;
        ayMon[1] = GetFebDay(nYear);
        for ( j = 0; j < 12; j++)//月
           {
            //直接算出13号是星期几，不需要一天一天的循环
            int nWeek = ((nTotalDays + 12) % 7 + nStartWeek) % 7;
            ayWeek[nWeek]++;
            nTotalDays += ayMon[j];
           }
    }

    //打印结果
    int nStart = 6;
    for (i = 0; i < 7; i++)
   {
         printf("%d ", ayWeek[nStart++]);
         nStart %= 7;
   }

   return 0;
}
