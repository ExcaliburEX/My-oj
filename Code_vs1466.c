/*��Ŀ���� Description
�ֻ��ϵ����������ˣ��������������ж����졣

�������� Input Description
��һ�У����

������� Output Description
��һ�У�����

�������� Sample Input
��1��2012

��2��2000

��3��1900

��4��1997

������� Sample Output
��1��366

��2��366

��3��365

��4��365
*/


#include <stdio.h>
int main()
{
    int a;
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||(a%400==0)){
	
		printf("366");
	} else printf("365");
    return 0;
}


