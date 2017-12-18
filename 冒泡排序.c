#include<stdio.h>
// ±º‰∏¥‘”∂» O(n^2)
int main(){
	int a[10]={12,3,4,2,16,85,23,6,5,10};
	int i,j,t;
	for(j=0;j<9;j++)
		for(i=0;i<9-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];a[i]=a[i+1];a[i+1]=t;
			}
			for(i=0;i<10;i++){
				printf("%d ",a[i]);
			}
			
			return 0;
			
}

/*for(i=n-1,change=true;i>1&&change;--i){

	change=false;
	for(j=0;j<i;++j)
	if(a[j]>a[j+1]){
		a[j]<-->a[j+1];
		change=true;
	}

}

*/
