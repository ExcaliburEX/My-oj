/*
��Ŀ���� Description
��������ָ����������ʹ��������һ����������12321����һ�����͵Ļ�������
����һ������B(2<=B<=20ʮ����)��������еĴ��ڵ���1С�ڵ���300������ƽ����B���Ʊ�ʾʱ�ǻ������������á�A��,��B��������ʾ10��11�ȵȡ�
�������� Input Description
��һ�У�һ������������B(B��ʮ���Ʊ�ʾ)��

������� Output Description
ÿ���������֣��ڶ������ǵ�һ������ƽ�����ҵڶ������ǻ�������

�������� Sample Input
10
������� Sample Output
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
���ݷ�Χ����ʾ Data Size & Hint
*/

#include<stdio.h>
#include<string.h>
int jinzhi;
char converted[1000];
	int if_huiwen(){
		int half=(strlen(converted)+1)/2;
//sprintf(num,"%s",a);//����ת�ַ��� 
	int j;
		for (j=0;j<=half-1;j++){
		if (converted[j]!=converted[strlen(converted)-j-1]) return 0;
	}
	return 1;
	}
	void convert (int a){
//ʮ��������ת��Ϊjinzhi����
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
