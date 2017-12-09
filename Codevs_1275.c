/*

��Ŀ���� Description
A ?sh-?nder is a device used by anglers to ?nd ?sh in a lake. If the ?sh-?nder ?nds a ?sh, it will sound an alarm. It uses depth readings to determine whether to sound an alarm. For our purposes, the ?sh-?nder will decide that a ?sh is swimming past if:

fish-finder��һ�������װ�ù�������ʹ�����ڻ�����㡣���һ��f-f�ҵ���һ���㣬�����������������������������������Ƿ��쾯�������ǵ�Ŀ�ľ���Ҫ�������Ƿ�ͨ�����������£�


? there are four consecutive depth readings which form a strictly increasing sequence (such as 3 4 7 9) (which we will call ��Fish Rising��), or

����������ĸ���ȶ������ϸ���������У����ǿ��Խ��� Fish Rising ��


? there are four consecutive depth readings which form a strictly decreasing sequence (such as 9 6 5 2) (which we will call ��Fish Diving��), or

����������ĸ���ȶ������ϸ�ݼ������У����ǿ��Խ��� Fish Diving ��


? there are four consecutive depth readings which are identical (which we will call ��Constant Depth��).
All other readings will be considered random noise or debris, which we will call ��No Fish.��
Your task is to read a sequence of depth readings and determine if the alarm will sound.

����������ĸ���ȶ�����һ���ģ��Ǿ��ǡ�Fish At Constant Depth������������ǣ����ǡ�No Fish����

�������� Input Description
The input will be four positive integers, representing the depth readings. Each integer will be on its own line of input.

��������ĸ���������������ȶ��롣ÿ��������ռһ�С�

������� Output Description
The output is one of four possibilities. If the depth readings are increasing, then the output should be Fish Rising. If the depth readings are decreasing, then the output should be Fish Diving. If the depth readings are identical, then the output should be Fish At Constant Depth. Otherwise, the output should be No Fish.

����������������

�������� Sample Input
����1��

30 10 20 20

����2��

1 10 12 13

������� Sample Output
����1��

No Fish

����2��

Fish Rising

���ݷ�Χ����ʾ Data Size & Hint
���ݺ�С


*/



#include <stdio.h>
int main()
{
    int a, b,c,d; //��������������
    scanf("%d%d%d%d", &a, &b,&c,&d);//�ӱ�׼��������������������
    if(b>a&&c>b&&d>c){
        	printf("Fish Rising");
		}
	else if(b<a&&c<b&&d<c){
    		printf("Fish Diving");
    			}else if(b==a&&c==b&&d==c){
    	    printf("Fish At Constant Depth");
			}else 
	{
	printf("No Fish");
	}
    return 0;
}

