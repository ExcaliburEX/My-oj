#include<stdio.h>
#define maxn 1001
char a[maxn];
int F(int n){
	if(n==1||n==2)
		return 1;
	else
		return F(n-1)+F(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	int n1=n;
	while(n--){
		int i=0;
		a[i]='o';
		if(i==F(n)){
			a[i]='O';
		}
		i++;
	}
	for(int i=0;i<n1;i++){
		printf("%c",a[i]);
	}
	return 0;	
}
