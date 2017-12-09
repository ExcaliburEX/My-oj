
//这题贼TM有意思，卧槽 
/*
hzwer找了一个人畜无害的迷の数列……

现在hzwer希望对这个数列进行一些操作，请你来回答hzwer的问题。

操作一：查询第i个数的大小

操作二：把第i个数的大小改成x

操作三：将整个序列反转。即把第i个数放到第n-i+1个。




输入数据第一行两个数n,m,表示数列长度和操作数。

第二行n个数，表示n个元素初始值。

以下m行，每行开头一个数opr，表示操作种类。

opr=1，则后面接一个数i,表示查询第i个数大小。

opr=2，则后面接两个数I,x，表示第i个数改成x。

opr=3，表示序列反转。输入数据第一行两个数n,m,表示数列长度和操作数。

第二行n个数，表示n个元素初始值。

以下m行，每行开头一个数opr，表示操作种类。

opr=1，则后面接一个数i,表示查询第i个数大小。

opr=2，则后面接两个数I,x，表示第i个数改成x。

opr=3，表示序列反转。




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

