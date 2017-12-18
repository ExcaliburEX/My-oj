/*
B. Months and Years
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Everybody in Russia uses Gregorian calendar. In this calendar there are 31 days in January, 28 or 29 days in February (depending on whether the year is leap or not), 31 days in March, 30 days in April, 31 days in May, 30 in June, 31 in July, 31 in August, 30 in September, 31 in October, 30 in November, 31 in December.

A year is leap in one of two cases: either its number is divisible by 4, but not divisible by 100, or is divisible by 400. For example, the following years are leap: 2000, 2004, but years 1900 and 2018 are not leap.

In this problem you are given n (1?¡Ü?n?¡Ü?24) integers a1,?a2,?...,?an, and you have to check if these integers could be durations in days of n consecutive months, according to Gregorian calendar. Note that these months could belong to several consecutive years. In other words, check if there is a month in some year, such that its duration is a1 days, duration of the next month is a2 days, and so on.

Input
The first line contains single integer n (1?¡Ü?n?¡Ü?24) ¡ª the number of integers.

The second line contains n integers a1,?a2,?...,?an (28?¡Ü?ai?¡Ü?31) ¡ª the numbers you are to check.

Output
If there are several consecutive months that fit the sequence, print "YES" (without quotes). Otherwise, print "NO" (without quotes).

You can print each letter in arbitrary case (small or large).

Examples
input
4
31 31 30 31
output
Yes

input
2
30 30
output
No

input
5
29 31 30 31 30
output
Yes

input
3
31 28 30
output
No

input
3
31 31 28
output
Yes

Note
In the first example the integers can denote months July, August, September and October.

In the second example the answer is no, because there are no two consecutive months each having 30 days.

In the third example the months are: February (leap year) ¡ª March ¡ª April ¨C May ¡ª June.

In the fourth example the number of days in the second month is 28, so this is February. March follows February and has 31 days, but not 30, so the answer is NO.

In the fifth example the months are: December ¡ª January ¡ª February (non-leap year).


*/


#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int h[100]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int a[1010];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<60-n;i++)
	{
		bool jud=true;
		for(int j=0;j<n;j++)
			if(a[j]!=h[i+j])
				jud=false;
		if(jud)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}




*/

#include<stdio.h>

int main(){
	
	int a[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int c[24]={31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	
	int i,j,n,flag1=0,flag2=0,flag3=0;
	scanf("%d",&n);
	int d[n];
	for(i=0;i<n;i++){
		
		scanf("%d",&d[i]);
	}
	for(i=0;i<24;i++){
		
		for(j=0;j<n;j++){
			if(a[i+j]==d[j])flag1++;
			else flag1=0;
			if(b[i+j]==d[j])flag2++;
			else flag2=0;
			if(c[i+j]==d[j])flag3++;
			else flag3=0;
		}
			if(flag1==n||flag2==n||flag3==n){
		break;
	}else {
		flag1=0;
		flag2=0;
		flag3=0;
		
		
	}
		
	}
	
	
	if(flag1==n||flag2==n||flag3==n){
		printf("Yes");
	}else 	printf("No");
	return 0;
	
	
}
