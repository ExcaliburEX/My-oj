
//������TM����˼���Բ� 
/*
hzwer����һ�������޺����Ԥ����С���

����hzwerϣ����������н���һЩ�������������ش�hzwer�����⡣

����һ����ѯ��i�����Ĵ�С

���������ѵ�i�����Ĵ�С�ĳ�x

�����������������з�ת�����ѵ�i�����ŵ���n-i+1����




�������ݵ�һ��������n,m,��ʾ���г��ȺͲ�������

�ڶ���n��������ʾn��Ԫ�س�ʼֵ��

����m�У�ÿ�п�ͷһ����opr����ʾ�������ࡣ

opr=1��������һ����i,��ʾ��ѯ��i������С��

opr=2��������������I,x����ʾ��i�����ĳ�x��

opr=3����ʾ���з�ת���������ݵ�һ��������n,m,��ʾ���г��ȺͲ�������

�ڶ���n��������ʾn��Ԫ�س�ʼֵ��

����m�У�ÿ�п�ͷһ����opr����ʾ�������ࡣ

opr=1��������һ����i,��ʾ��ѯ��i������С��

opr=2��������������I,x����ʾ��i�����ĳ�x��

opr=3����ʾ���з�ת��




4 6

1 3 2 4

1 3

2 2 6

3

2 1 3

1 3

1 1 




2

6

3





*/

#include <stdio.h>
int main()
{
    int len,num,com,i,com1,com2,x,j;
    int flag=0;
    scanf("%d %d",&len,&num);
    int a[len],b[len];
    for(i=0;i<len;i++){
	scanf("%d",&a[i]);
	}

	for(i=0;i<num;i++){
		scanf("%d",&com);
		if(flag==0){
		if(com==1){
			scanf("%d",&com1);
			printf("%d\n",a[com1-1]);
		}
		if(com==2){
			scanf("%d %d",&com2,&x);
			a[com2-1]=x;
		}
		if(com==3){
		if(flag==0)
		flag=1;
		else if(flag==1)
		flag=0;
		}
	}else{
		if(com==1){
			scanf("%d",&com1);
			printf("%d\n",a[len-com1]);
		}
		if(com==2){
			scanf("%d %d",&com2,&x);
			a[len-com2]=x;
		}
		if(com==3){
		if(flag==0)
		flag=1;
		else if(flag==1)
		flag=0;
		}
		
		
	}
	
	
	
	
	
	}
	return 0;
}

