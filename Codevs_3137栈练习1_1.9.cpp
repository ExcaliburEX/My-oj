/*
��Ŀ���� Description
����һ��ջ(��ʼΪ��,Ԫ������Ϊ����,��С�ڵ���100),ֻ����������:��ջ�ͳ�ջ���ȸ�����Щ���������������ջ��ջ��Ԫ�ء�  �������ͣ�1��ʾ��ջ��2��ʾ��ջ

�������� Input Description
N(��������)

N������(�������ջ����滹����һ����ջԪ��)

���������(���뱣֤ջ��ʱ�����ջ)

������� Output Description
����ջ��Ԫ�أ�������ջ�գ������impossible!��(��������)

�������� Sample Input
3

1 2

1 9

2

������� Sample Output
2

���ݷ�Χ����ʾ Data Size & Hint
����100%������  N��1000 Ԫ�ؾ�Ϊ��������С�ڵ���100



*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int s[1000],top=0;

void pop(){
    top--;
}

int push(int k){
    top++;
    s[top]=k;
}

int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==1){
            cin>>b;
            push(b);
        }
        if(a==2){
            pop();
        }
    }
    if(!top)cout<<"Impossible!";
    else cout<<s[top];
    return 0;
}
