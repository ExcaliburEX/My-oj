/*
��Ŀ���� Description
����һȺҪ������������ѣ���Ҫȷ��ÿ�����ͳ���������յ��Ķ����(and vice versa for those who view gift giving with cynicism)��
����һ�������У�ÿ���˶�׼����һЩǮ�����������ЩǮ���ᱻƽ���ָ���Щ���յ�����������ˡ�
Ȼ�������κ�һȺ�����У���Щ�˽��ͳ��϶������(��������Ϊ�н϶������)����Щ����׼���˽϶��Ǯ��
����һȺ���ѣ� û���˵����᳤ֻ�� 14 �ַ�������ÿ���˽����������ϵ�Ǯ���ͽ��յ�����������˵��б�
��ȷ��ÿ�����յ��ı��ͳ���Ǯ�����Ŀ��

�������� Input Description
�� 1 ��:	
����NP,2<= NP<=10

�� 2�� NP+1 ��:

��NP���������˵����֡�һ������һ��

��NP��2�����

�����NP��������������֯�ģ�
��һ���ǽ����ͳ������˵����֡�
�ڶ��а�����������:����һ����ԭ�е�Ǯ����Ŀ����0��2000�ķ�Χ����ڶ���NGi�ǽ��յ����������������˵ĸ��� ��� NGi �Ƿ����, ������ NGi ���г�����Ľ����ߵ����֣�һ������һ�С�

������� Output Description
��� NP ��
ÿ����һ�������ּ��Ͽո��ټ����յ��ı��ͳ���Ǯ�����Ŀ��
����ÿһ���ˣ������ֵĴ�ӡ˳��Ӧ�����������2��NP��1���������˳����ͬ�����е������Ǯ����������
ÿ���˰���ͬ��Ŀ��Ǯ��ÿλҪ��������ѣ����Ҿ����ܶ�������ܸ�����Ǯ���������Լ�������

�������� Sample Input
5
dave
laura
owen
vick
amr
dave
200 3
laura
owen
vick
owen
500 1
dave
amr
150 2
vick
owen
laura
0 2
amr
vick
vick
0 0

������� Sample Output
dave 302
laura 66
owen -359
vick 141
amr -150

���ݷ�Χ����ʾ Data Size & Hint
����ϵͳ�� Linux ���ϱ�׼�� Unix ��Э����
��'\n'��Ϊ�еĽ�����
��͡�Windows ϵͳ��'\n' �� '\r'��Ϊ�еĽ����ǲ�ͬ�ġ�
��ĳ���Ҫ������ס��  



*/












#include <stdio.h>
#include <string.h>
int main()
{
	int NP;
	int friend_num,give_money,save_money,to_money,have_money[10]={0};
	char giveP[10][14],name[10][14],owner[10][14];
	int i,j,k;
	scanf("%d", &NP);
	for(i=0; i<NP; i++)
	scanf("%s",&name[i]);
	// 
	for(i=0;i<NP;i++){
		scanf("%s",&owner[i]);
		scanf("%d %d",&give_money,&friend_num);
		to_money = 0;//��ʼ�� 
		if(friend_num!=0&&give_money!=0){
		save_money=give_money%friend_num;
		give_money-=save_money;//������� 
		to_money=give_money/friend_num;
			}
	//have_money���� 
		for(k=0; k<NP; k++)
		if( (strcmp(owner[i],name[k])) == 0){
		have_money[k]-=give_money;
			}
		for(j=0; j<friend_num && friend_num!=0; j++){
		scanf("%s", &giveP[j]);
		for(k=0; k<NP; k++)
		if( (strcmp(giveP[j],name[k])) == 0){
			have_money[k]+=to_money;
			}
		}
	}
	//��� 
		for(i=0; i<NP;i++)
			printf("%s %d\n",name[i],have_money[i]);
		return 0;
}

