
/*
#include <stdio.h>


�ݹ�(���η�˼��):
��(ri)perm(X)��ʾÿһ��ȫ����ǰ����ǰ׺ri�õ�������.
��n=1ʱ,perm(R)=(r) ����r��Ψһ��Ԫ��,������ǳ�������.
��n>1ʱ,perm(R)��(r1)perm(R1),(r2)perm(R2),...(rn)perm(Rn)����.

//�˴�Ϊ����,��������.�������ö�,�ʶ���Ϊ��������.
inline void Swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

void Perm(int list[],int k,int m) //k��ʾǰ׺��λ��,m��Ҫ���е���Ŀ.
{
	if(k==m-1) //ǰ׺�����һ��λ��,��ʱ��ӡ������.
	{
		for(int i=0;i<m;i++)
			printf("%d ",list[i]);
		printf("\n");
	}
	else
	{
		for(int i=k;i<m;i++)
		{
			//����ǰ׺,ʹ֮������һ��ǰ׺.
			Swap(list[k],list[i]);//��
			Perm(list,k+1,m);//��
			//��ǰ׺������,��������һ����ǰ׺����.
			Swap(list[k],list[i]);//��
		}
	}
}

int main()
{
	int list[] = {1,2,3,4};
	Perm(list,0,4);
	return 0;
}*/
#include<iostream>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    int ans[4]={1,2,3,4};  
    sort(ans,ans+4);    /* ���sort���Բ��ã���Ϊ{1��2��3��4}�Ѿ��ź���*/  
    do                             /*ע���ⲽ�������whileѭ��������Ҫ��ǰ���*/  
    {  
        for(int i=0;i<4;++i)  
            cout<<ans[i]<<" ";  
        cout<<endl;  
    }while(next_permutation(ans,ans+4));  
    return 0;  
} 

