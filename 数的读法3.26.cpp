//�����ʼ��ÿ��λ��һ��wei����  
//ȥ������0�����  
//����ӡȥ��yi shi�����  
#include<iostream>  
#include<cstdio>  
using namespace std;  
int main()  
{  
    char *num[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};  
    char *wei[]={"shi","bai","qian","wan","yi"};  
    char *str[20];//���Ľ��  
    //i:4λ��Ϊһ��  
    //j:����str���±�  
    //k:n�����һλ��  
    //flag:���wan��yi�Ƿ��Ѿ���¼��  
    int i,j,k,n,flag[2]={0};  
    i=j=0;  
    cin>>n;  
    while(n>0){  
        k=n%10;  
        n/=10;  
        if(k>0){//��λ����0  
            if(i>0){//��λ�Ѿ���ʼ  
                if(i>=4&&!flag[i/4-1]){//����Ǵ��ڵ���4λ�����������Ѿ�����һ��wei����ô�Ͳ�Ҫ�����  
                    flag[i/4-1]=1;  
                    str[j++]=wei[i/4+2];  
                }  
                if(i%4!=0){//����shi��bai��qian�������������Ҫ  
                    str[j++]=wei[i%4-1];  
                }  
            }  
            str[j++]=num[k];  
        }else if(j>0&&str[j-1]!=num[0]){//�ж���������ǲ��Ƕ���0  
            str[j++]=num[0];  
        }  
        i++;  
    }  
  if(!(str[j-1]=="yi"&&j>1&&str[j-2]=="shi"))//ȥ��yi shi�����  
     cout<<str[j-1]<<" "; 
    for(i=j-2;i>=0;i--){  
        cout<<str[i]<<" ";  
    }  
    return 0;  
}  
