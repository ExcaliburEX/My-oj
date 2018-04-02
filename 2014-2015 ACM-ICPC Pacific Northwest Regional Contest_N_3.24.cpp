#include<iostream>
#include<string.h>
using namespace std;
int a[1001];
int main(){
    int n,m,b,c,d;
    cin>> n;
    while(n--){
        b=1,d=0;
        memset(a,0,sizeof a);
        cin>>m;
        for(int i=0;i<m;i++){
               int tmp;
               cin>>tmp;
               a[tmp]++;
        }
        for(int i=1;i<=1000;i++){
               if(a[i]>b){b=a[i];d=i;}
        }
        for(int i=1;i<=1000;i++){
               if(a[i]!=0){c=i;break;}
        }
         if(b>1)cout<<d<<endl;
         else cout<<c<<endl;

    }

    return 0;
}
