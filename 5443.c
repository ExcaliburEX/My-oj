#include <stdio.h>
int main()
{    
	char a[100],b[100];
		
	int i;
   gets(a);
   
    if(a[0]=='-'){
    	for(i=0;i<100;i++){
    		b[i]=a[i+1];
		}
   	 puts(b);
    	
	}
 
else if(a[0]=='+'){
	a[0]='-';
		
   	 puts(a);
	
	
	
} else {
  puts(a);
}
   return 0;  
}

