/*
��Ŀ���� Description
�ܶ�ͯЬϲ����һЩlol��dota������Ϸ��������Ϸ��һ���ص㣬���㲻�������������ɱ�˻��в�ͬ�ƺš�
��������һ���ַ�������ֻ����K��D��K����ɱ�У�D����������������߳ƺš�
0/1/2 - You are a Foolish Man
3 - You are on a Killing Spree 
4 - You are Dominating 
5 - You have a Mega-Kill 
6 - You are Unstoppable
7 - You are Wicked Sick
8 - You have a M-m-m-m....Monster Kill 
9 - You are Godlike 
10+ - You are Beyond Godlike (Somebody kill him!)

�������� Input Description
��������
 KKKDKKDDDKKKK

������� Output Description
ֻ��K��D�������Ǵ�д

�������� Sample Input
�������
You are Dominating

������� Sample Output
��һ�У���ʾ�ɼ�

���ݷ�Χ����ʾ Data Size & Hint
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
