//从最后开始，每四位加一个wei数组  
//去掉连续0的情况  
//最后打印去除yi shi的情况  
#include<iostream>  
#include<cstdio>  
using namespace std;  
int main()  
{  
    char *num[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};  
    char *wei[]={"shi","bai","qian","wan","yi"};  
    char *str[20];//最后的结果  
    //i:4位数为一组  
    //j:数组str的下标  
    //k:n的最后一位数  
    //flag:标记wan，yi是否已经记录过  
    int i,j,k,n,flag[2]={0};  
    i=j=0;  
    cin>>n;  
    while(n>0){  
        k=n%10;  
        n/=10;  
        if(k>0){//此位大于0  
            if(i>0){//四位已经开始  
                if(i>=4&&!flag[i/4-1]){//如果是大于等于4位数的数，且已经加了一个wei，那么就不要添加了  
                    flag[i/4-1]=1;  
                    str[j++]=wei[i/4+2];  
                }  
                if(i%4!=0){//处理shi，bai，qian，这个条件很重要  
                    str[j++]=wei[i%4-1];  
                }  
            }  
            str[j++]=num[k];  
        }else if(j>0&&str[j-1]!=num[0]){//判断连续另个是不是都是0  
            str[j++]=num[0];  
        }  
        i++;  
    }  
  if(!(str[j-1]=="yi"&&j>1&&str[j-2]=="shi"))//去除yi shi的情况  
     cout<<str[j-1]<<" "; 
    for(i=j-2;i>=0;i--){  
        cout<<str[i]<<" ";  
    }  
    return 0;  
}  
