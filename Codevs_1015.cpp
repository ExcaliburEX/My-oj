#include<iostream>



#include<cstring>

#include<stdio.h>

using namespace std;

int main()

{

char a[1000],c[1000],d[1000];	//����a�Ǽ�¼�����ʽ�ӡ�c�Ǽ�¼��ֵ�����Ƿ�����ĸ��d��¼���� 

 

double b[1000]={0},changshu=0,feichangshu=0;	//b��¼��ֵ�� 

int num,j,i=0,k=0,count=0,flag=1,m=0;	 

cin>>a;

num=strlen(a);	//��¼�ַ����ĳ��� 

	for(j=0;j<num;j++)

{

		if(a[j]>='0' && a[j]<='9')	//��������־ͽ��м��㣬���磺12 = 1*10+2. 
	
		{
	
			b[i]=b[i]*10+(a[j]-48);
	
	}
	
			else if(a[j]=='-')	//�������� 
	
	{
	
			d[flag++]=a[j];
	
			i++;
	
	}
	
			else if(a[j]=='+')
	
	{
	
			d[flag++]=a[j];
	
			i++; 
	
	}
	
			else if(a[j]>='a' && a[j]<='z')	//��ĸҲ�������� 
	
	{
	
			c[i]=a[j];
	
			count=i;
	
	}
	
			else if(a[j]=='=')	//����ǵ��ںž�Ҫ������ļӼ��ŵ��� 
	
	{
	
			i++;
	
			d[flag]='-';
	
			m=j;	//m��¼�ڼ����ǵ��ں� 
	
			break;

}

}

		for(j=j;j<num;j++)

{
	
	if(j==m+1&&a[j]!='-')	flag++;
	
	if(a[j]>='0' && a[j]<='9')
	
	{
	
	b[i]=b[i]*10+(a[j]-48);
	
	}
	
	else if(a[j]=='-')
	
	{
	
	d[flag++]='+';
	
	if(j!=m+1)
	
	i++;
	
	}
	
	else if(a[j]=='+')
	
	{
	
	d[flag++]='-';
	
	i++;
	
	}
	
	else if(a[j]>='a' && a[j]<='z')
	
	{
	
	c[i]=a[j];
	
	count=i;
	
	}

}

for(int k=0;k<=i;k++)

{

if(c[k]==0 && d[k]=='-')	changshu-=b[k];

else if(c[k]==0)	changshu+=b[k];

else if(d[k]=='+'){

feichangshu+=b[k];

}

else if(d[k]=='-'){

feichangshu-=b[k];

}

else feichangshu+=b[k];

}

cout<<c[count]<<"=";

if(changshu/feichangshu!=0)

printf("%0.3f",-changshu/feichangshu);

else 

printf("%0.3f",changshu/feichangshu);

}
