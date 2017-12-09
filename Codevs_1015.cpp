#include<iostream>



#include<cstring>

#include<stdio.h>

using namespace std;

int main()

{

char a[1000],c[1000],d[1000];	//数组a是记录输入的式子。c是记录数值后面是否是字母，d记录符号 

 

double b[1000]={0},changshu=0,feichangshu=0;	//b记录数值。 

int num,j,i=0,k=0,count=0,flag=1,m=0;	 

cin>>a;

num=strlen(a);	//记录字符串的长度 

	for(j=0;j<num;j++)

{

		if(a[j]>='0' && a[j]<='9')	//如果是数字就进行计算，例如：12 = 1*10+2. 
	
		{
	
			b[i]=b[i]*10+(a[j]-48);
	
	}
	
			else if(a[j]=='-')	//保存起来 
	
	{
	
			d[flag++]=a[j];
	
			i++;
	
	}
	
			else if(a[j]=='+')
	
	{
	
			d[flag++]=a[j];
	
			i++; 
	
	}
	
			else if(a[j]>='a' && a[j]<='z')	//字母也保存起来 
	
	{
	
			c[i]=a[j];
	
			count=i;
	
	}
	
			else if(a[j]=='=')	//如果是等于号就要将后面的加减号倒置 
	
	{
	
			i++;
	
			d[flag]='-';
	
			m=j;	//m记录第几个是等于号 
	
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
