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
const int maxn=1000+1;
int a[maxn],k[maxn];
int n,top=0;
void pop()
{
    top--;
}
int push(int s)
{
    top++;
    k[top]=s;
}
int main()
{
    int r;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==2)
        {
            pop();
        }
        else if(a[i]==1)
        {
            scanf("%d",&r);
            push(r);
        }
    }
    if(top==0)
    cout<<"impossible!";
    else cout<<k[top]<<endl;
    return 0;
}
