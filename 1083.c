#include<stdio.h>

int main()
{
    int n,k,s;            //ǰk��б��һ��s����
    while(scanf("%d",&n) == 1)
    {    
        k=0;
        s=0;
        while(s<n)        //�ҵ���С��kʹ��s>=n
        {
            k++;
            s+=k;
        }
        if(k%2==1)        //k����ż������б��������˳��,n�ǵ�k��б���ϵ�����s-n+1����
            printf("%d/%d\n",s-n+1,k+n-s);    //��k����������k��б���ϵ�����i��Ԫ����i/(k+1-i)
        else
            printf("%d/%d\n",k+n-s,s-n+1);    //��k��ż������k��б���ϵ�����i��Ԫ����(k+1-i)/i
    }
    
    return 0;
}
