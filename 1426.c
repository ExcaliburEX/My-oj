#include <stdio.h>
int main()
{
    int i,get,price,charge; 
    int a[6]={100,50,20,10,5,1};
    int b[6]={0};
    int q,k;
    
 	
    scanf("%d", &get);
    scanf("%d",&price);
    charge=get-price;
    k=charge;
    while(charge){
    	for(i=0;i<6;i++){
    		while(a[i]<=charge){
    			charge=charge-a[i];
    			b[i]++;
			}
		}
	}
    
    for(i=5;i>=0;i--){
    	if(b[i]!=0){
    		q=i;
    		break;
		}
	} 
	
	printf("%d\n",k);
	
	for(i=0;i<q;i++){
		if(b[i]){
			printf("%d*%d+",a[i],b[i]);
		}
	}
	printf("%d*%d",a[q],b[q]);
	
	printf("=%d",k);
	
    
    return 0;
}

