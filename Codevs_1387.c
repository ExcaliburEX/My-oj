/*
��Ŀ���� Description
һ��N x N��1<=N<=10�������εĺڰ���Ƭ��ͼ��Ҫ��ת�����µ�������ͼ����дһ���������ҳ���ԭʼ
ͼ������������ת������ת������ͼ������С��ʽ��
#1��ת90�ȣ�ͼ����˳ʱ��ת90�ȡ�
#2��ת180�ȣ�ͼ����˳ʱ��ת180�ȡ�
#3��ת270�ȣ�ͼ����˳ʱ��ת270�ȡ�
#4�����䣺ͼ����ˮƽ����ת���γ�ԭͼ���ľ��񣩡�
#5����ϣ�ͼ����ˮƽ����ת��Ȼ����#1-#3֮һת����
#6�����ı䣺ԭͼ�����ı䡣
#7����Чת�����޷������Ϸ����õ���ͼ����
����ж��ֿ��õ�ת����������ѡ�������С���Ǹ���

�������� Input Description
��һ�У�	������һ������N��
�ڶ��е���N+1�У�	N��ÿ��N���ַ������ǡ�@�����ǡ�-����������ת��ǰ�������Ρ�
��N+2�е���2*N+1�У�	N��ÿ��N���ַ������ǡ�@�����ǡ�-����������ת����������Ρ�
������� Output Description
������һ�а���1��7֮���һ�����֣���������������������Ҫ��ת��ǰ�������α�Ϊת����������ε�
ת��������

�������� Sample Input
3
@-@
---
@@-
@-@
@--
--@

������� Sample Output
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
