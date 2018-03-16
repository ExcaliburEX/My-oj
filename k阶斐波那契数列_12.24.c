



#include<stdio.h>

int main(){
	long long i,k,m,f;
	k=2,m=18;
	for(i=0;i<100;i++){
	
	printf("%d\n",Fibonacci(k,i,f));
}
}


int Fibonacci(int k, int m, int f)   
/* 求k阶斐波那契序列的第m项的值f    */  
{  
   int sum,i,j,e[100];  
   if(k < 2||m < 0) return -1;  /**异常处理**/  
   /** 
    根据k阶斐波那契序列的定义： 
    K阶斐波那契数列的前K-1项均为0,    
    第k项为1,以后的每一项都是前K项的和 
   **/  
   if(m < k-1)  
        f = 0;         
   else if(m == k-1)  
            f = 1;         
       else{  
            for(i = 0;i < k-1;i++)  
                e[i] = 0;              //K阶斐波那契数列的前K-1项均为0  
            e[k-1] = 1;                //第k项为1  
            for(i = k;i <= m;i++){        
                sum = 0;  
                for(j = i-k;j <= i;j++)//以后的每一项都是前k项的和  
                    sum += e[j];  
                e[i] = sum;            //将以后的每一项的值存进数组e中  
            }  
            f = e[m];                  //求k阶斐波那契序列的第m项的值f  
       }  
   return f;  
}  
