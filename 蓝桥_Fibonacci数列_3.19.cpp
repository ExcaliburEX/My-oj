#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1e6;
int a[maxn];

int main(){
   memset(a,0,sizeof(a));
   int n;
   cin>>n;
   int n0=n;
   a[1]=1;
   a[2]=1;
   int i=3;
   while(n--){
    a[i]=((a[i-1]+a[i-2])%10007);
    i++;
   }
   cout<<a[n0];
   return 0;
}
