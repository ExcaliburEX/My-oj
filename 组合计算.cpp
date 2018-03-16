#include <stdio.h>
#define MAXN 1000000
int a[MAXN]={0};
long long counts=0;
void  comb(int m,int k)
{     int i,j;
      for (i=m;i>=k;i--)
      { 
          a[k]=i;
          if (k>1)
              comb(i-1,k-1);
          else
          {   
              counts++;              
              for (j=a[0];j>0;j--);
               //   printf("%d ",a[j]);
            //  printf("\n");
               
          }
      }
}
int main()
{   
      int m,r;
      printf("Please input m:");
      scanf("%d",&m);
      printf("Please input n:");
      scanf("%d",&r);
      counts=0;
      a[0]=r;
      comb(m,r);
      printf("All kinds is:%d\n",counts);
      return 0;
}
