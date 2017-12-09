/*
题目描述 Description
很多童鞋喜欢玩一些lol、dota这类游戏，这类游戏有一个特点，在你不死的情况下连续杀人会有不同称号。
下面输入一组字符，其中只包含K和D，K代表杀敌，D代表死亡，求他最高称号。
0/1/2 - You are a Foolish Man
3 - You are on a Killing Spree 
4 - You are Dominating 
5 - You have a Mega-Kill 
6 - You are Unstoppable
7 - You are Wicked Sick
8 - You have a M-m-m-m....Monster Kill 
9 - You are Godlike 
10+ - You are Beyond Godlike (Somebody kill him!)

输入描述 Input Description
样例输入
 KKKDKKDDDKKKK

输出描述 Output Description
只有K和D，而且是大写

样例输入 Sample Input
样例输出
You are Dominating

样例输出 Sample Output
就一行，表示成绩

数据范围及提示 Data Size & Hint
string

*/

#include <stdio.h>
#include <string.h>
char map[100000];

int main(){
	int i,l,s=0,maxx=0;
	scanf("%s",map);
	l=strlen(map);
	
	for(i=0;i<l;i++){
		if(map[i]=='K')s++;
		else if(map[i]=='D')s=0;
		if(maxx<s)maxx=s;
	}
	
	
	switch(maxx){
		case 0:printf("You are a Foolish Man");break;
		case 1:printf("You are a Foolish Man");break;
		case 2:printf("You are a Foolish Man");break;
		case 3:printf("You are on a Killing Spree");break;
		case 4:printf("You are Dominating");break;
    case 5:printf("You have a Mega-Kill");break;
    case 6:printf("You are Unstoppable");break;
		case 7:printf("You are Wicked Sick");	break;
		case 8:printf("You have a M-m-m-m....Monster Kill");break;
		case 9:printf("You are Godlike");break;
		default:printf("You are Beyond Godlike (Somebody kill him!)");break;	
  }
  
  return 0;
}
