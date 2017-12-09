/*
题目描述 Description
一块N x N（1<=N<=10）正方形的黑白瓦片的图案要被转换成新的正方形图案。写一个程序来找出将原始
图案按照以下列转换方法转换成新图案的最小方式：
#1：转90度：图案按顺时针转90度。
#2：转180度：图案按顺时针转180度。
#3：转270度：图案按顺时针转270度。
#4：反射：图案在水平方向翻转（形成原图案的镜像）。
#5：组合：图案在水平方向翻转，然后按照#1-#3之一转换。
#6：不改变：原图案不改变。
#7：无效转换：无法用以上方法得到新图案。
如果有多种可用的转换方法，请选择序号最小的那个。

输入描述 Input Description
第一行：	单独的一个整数N。
第二行到第N+1行：	N行每行N个字符（不是“@”就是“-”）；这是转换前的正方形。
第N+2行到第2*N+1行：	N行每行N个字符（不是“@”就是“-”）；这是转换后的正方形。
输出描述 Output Description
单独的一行包括1到7之间的一个数字（在上文已描述）表明需要将转换前的正方形变为转换后的正方形的
转换方法。

样例输入 Sample Input
3
@-@
---
@@-
@-@
@--
--@

样例输出 Sample Output
1
*/


#include<stdio.h>

int first(int n,char a[n][n],char b[n][n]){
	int i,j;
	char c[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[n-j-1][i];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i][j]!=b[i][j])return 0;
		}
	}
	
	return 1;
	
}


int second(int n,char a[n][n],char b[n][n]){
	int i,j;
	char c[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[n-i-1][n-j-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i][j]!=b[i][j])return 0;
		}
	}
	
	return 1;
	
}

int third(int n,char a[n][n],char b[n][n]){
	int i,j;
	char c[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[j][n-i-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i][j]!=b[i][j])return 0;
		}
	}
	
	return 1;
	
}


int fourth(int n,char a[n][n],char b[n][n]){
	int i,j;
	char c[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][n-j-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i][j]!=b[i][j])return 0;
		}
	}
	
	return 1;
	
}


int fifth(int n,char a[n][n],char b[n][n]){
	int i,j;
	char c[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][n-j-1];
		}
	}
	
	if(first(n,c[n][n],b[n][n]))return 1;
	else if(second(n,c[n][n],b[n][n]))return 1;
	else if(third(n,c[n][n],b[n][n]))return 1;

	
	return 0;
	
}


int sixth(int n,char a[n][n],char b[n][n]){
		int i,j;
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]!=b[i][j])return 0;
		}
	}

	
	return 1;
	
}




int main(){
	int n,s[7],i,j;
	scanf("%d",&n);
	 scanf("\n");
	memset(s,0,sizeof(s));
	char a[10][10],b[10][10];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%c",&a[i][j]);
	}
	 scanf("\n");
}
     printf("\n");
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%c",&b[i][j]);
	}
	 scanf("\n");
}
	s[0]=first(n,a[n][n],b[n][n]);
	s[1]=second(n,a[n][n],b[n][n]);
	s[2]=third(n,a[n][n],b[n][n]);
	s[3]=fourth(n,a[n][n],b[n][n]);
	s[4]=fifth(n,a[n][n],b[n][n]);
	s[5]=sixth(n,a[n][n],b[n][n]);
	s[6]=1;
	
	for(i=0;i<6;i++){
		if(s[i]==1){
			printf("%d",i+1);
			break;
		}
		
	}
	
	return 0;
	
}
