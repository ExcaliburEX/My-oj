



#include<stdio.h>

int main(){
	long long i,k,m,f;
	k=2,m=18;
	for(i=0;i<100;i++){
	
	printf("%d\n",Fibonacci(k,i,f));
}
}


int Fibonacci(int k, int m, int f)   
/* ��k��쳲��������еĵ�m���ֵf    */  
{  
   int sum,i,j,e[100];  
   if(k < 2||m < 0) return -1;  /**�쳣����**/  
   /** 
    ����k��쳲��������еĶ��壺 
    K��쳲��������е�ǰK-1���Ϊ0,    
    ��k��Ϊ1,�Ժ��ÿһ���ǰK��ĺ� 
   **/  
   if(m < k-1)  
        f = 0;         
   else if(m == k-1)  
            f = 1;         
       else{  
            for(i = 0;i < k-1;i++)  
                e[i] = 0;              //K��쳲��������е�ǰK-1���Ϊ0  
            e[k-1] = 1;                //��k��Ϊ1  
            for(i = k;i <= m;i++){        
                sum = 0;  
                for(j = i-k;j <= i;j++)//�Ժ��ÿһ���ǰk��ĺ�  
                    sum += e[j];  
                e[i] = sum;            //���Ժ��ÿһ���ֵ�������e��  
            }  
            f = e[m];                  //��k��쳲��������еĵ�m���ֵf  
       }  
   return f;  
}  
