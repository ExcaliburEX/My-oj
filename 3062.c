
#include <stdio.h>
#include <stdbool.h>
int num(int a){
	int cnt=0;
	while(a!=0){
		cnt++;
		a/=10;
	}
	return cnt;
	
}
int pow3(int a,int b){
	int i;
	
	int result=1;
	for(i=0;i<b;i++){
		result*=a;
	}
	return result;
}
int main()
{
    int i,m,n,k,j,oi,l;
    int z,sum=0;
    bool sign=false;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
    	k=num(i); 
    	
    	oi=i;
    	for(j=0;j<k;j++){
    		l=oi%10;
    		z=pow3(l,k);
    		oi=oi/10;
    		sum+=z;
    		
		}

			
		if(sum==i){
			printf("%d\n",i);
			sign=true;
		}
		sum=0;
	}
	if(!sign){
		printf("No solution!");
	}
	
		
    return 0;
}

