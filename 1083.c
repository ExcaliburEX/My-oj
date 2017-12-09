#include<stdio.h>

int main()
{
    int n,k,s;            //前k挑斜线一共s个数
    while(scanf("%d",&n) == 1)
    {    
        k=0;
        s=0;
        while(s<n)        //找到最小的k使得s>=n
        {
            k++;
            s+=k;
        }
        if(k%2==1)        //k的奇偶决定着斜线上数的顺序,n是第k条斜线上倒数第s-n+1个数
            printf("%d/%d\n",s-n+1,k+n-s);    //若k是奇数，第k条斜线上倒数第i个元素是i/(k+1-i)
        else
            printf("%d/%d\n",k+n-s,s-n+1);    //若k是偶数，第k条斜线上倒数第i个元素是(k+1-i)/i
    }
    
    return 0;
}
