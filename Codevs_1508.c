/*
题目描述 Description
　　众所周知，在每一个彗星后都有一只UFO。这些UFO时常来收集地球上的忠诚支持者。不幸的是，他们的飞碟每次出行都只能带上一组支持者。因此，他们要用一种聪明的方案让这些小组提前知道谁会被彗星带走。他们为每个彗星起了一个名字，通过这些名字来决定这个小组是不是被带走的那个特定的小组（你认为是谁给这些彗星取的名字呢？）。关于如何搭配的细节会在下面告诉你；你的任务是写一个程序，通过小组名和彗星名来决定这个小组是否能被那颗彗星后面的UFO带走。

　　小组名和彗星名都以下列方式转换成一个数字：最终的数字就是名字中所有字母的积，其中“A”是1，“Z”是26。例如，“USACO”小组就是21*19*1*3*15=17955。如果小组的数字 mod 47等于彗星的数字mod 47,你就得告诉这个小组需要准备好被带走！（记住“a mod b”是a除以b的余数；34 mod 10等于4）

　　写出一个程序，读入彗星名和小组名并算出用上面的方案能否将两个名字搭配起来，如果能搭配，就输出“GO”，否则输出“STAY”。小组名和彗星名均是没有空格或标点的一串大写字母（不超过6个字母）。

输入描述 Input Description
第1行：一个长度为1到6的大写字母串，表示彗星的名字。

第2行：一个长度为1到6的大写字母串，表示队伍的名字。

输出描述 Output Description
仅一行，包括“GO”或“STAY”。

样例输入 Sample Input
【样例输入1】

COMETQ

HVNGAT

【样例输入2】

ABSTAR

USACO

样例输出 Sample Output
【样例输出1】

GO

【样例输出2】

STAY

数据范围及提示 Data Size & Hint



*/




#include<stdio.h>
 int main(){
 	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 	int i,j;
 	int c=1,d=1;
	 char a1[6],b[6];
 	scanf("%s \n%s",a1,b);

 	for(i=0;i<6;i++){
 		for(j=0;j<26;j++){
 			if(a1[i]==a[j]){		
 				c*=(j+1);
			 }	
			 	if(b[i]==a[j]){		
 				d*=(j+1);
			 }		
		 }
	 }
	 
	 
	 
	 
 	if(c%47==d%47){
 		printf("GO");
	 }else{
	 	 printf("STAY");
	 }
 
 
 	return 0;
 	
 	
 }
