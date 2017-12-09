/*
题目描述 Description
回文数是指从左向右念和从右像做念都一样的数。如12321就是一个典型的回文数。
给定一个进制B(2<=B<=20十进制)，输出所有的大于等于1小于等于300且它的平方用B进制表示时是回文数的数。用’A’,’B’……表示10，11等等。
输入描述 Input Description
共一行，一个单独的整数B(B用十进制表示)。

输出描述 Output Description
每行两个数字，第二个数是第一个数的平方，且第二个数是回文数。

样例输入 Sample Input
10
样例输出 Sample Output
1 1
2 4
3 9
11 121
22 484
26 676
101 10201
111 12321
121 14641
202 40804
212 44944
264 69696
数据范围及提示 Data Size & Hint
*/

#include<stdio.h>
#include<string.h>
int jinzhi;
char converted[1000];
	int if_huiwen(){
		int half=(strlen(converted)+1)/2;
//sprintf(num,"%s",a);//数字转字符串 
	int j;
		for (j=0;j<=half-1;j++){
		if (converted[j]!=converted[strlen(converted)-j-1]) return 0;
	}
	return 1;
	}
	void convert (int a){
//十进制数字转换为jinzhi进制
		int i=0,j;
		int yushu[1000];
		memset(yushu,0,sizeof(yushu));
		while (a!=0){
		yushu[i] = a % jinzhi;
		a/=jinzhi;
		i++;
	}
	for (j=0;j<=i-1;j++){
	converted[j] = yushu[i-1-j] + '0';
	if (converted[j]>=58) converted[j]+=7; 
	} 

}
	int pingfang (int a){
		return a*a;
	}
int main(){
	int i,j;
	scanf("%d",&jinzhi);
	for (i=1;i<=300;i++){
		memset(converted,0,sizeof(converted));
		convert(pingfang(i));
		if (if_huiwen()==1){
		memset(converted,0,sizeof(converted));
		convert(i);
		for (j=0;j<strlen(converted);j++) printf("%c",converted[j]);
		printf(" ");
		memset(converted,0,sizeof(converted));
		convert(pingfang(i));
		for (j=0;j<strlen(converted);j++) printf("%c",converted[j]);
		printf("\n"); 
	}
}
		
		return 0;
}
