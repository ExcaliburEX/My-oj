

#include<iostream>
#include<string.h>
using namespace std;

int a[201];
int main(){
    int T,N,L,R,num=10;
    memset(a,0,sizeof(a));
    cin>>T;
    while(T--){
        cin>>N;
        cin>>L>>R;
        num=10;
        for(int i=L;i<=R;i++){
           a[i]=1;
        }
        N-=1;

        while(N--){
            cin>>L>>R;
            if(a[L]==1)num+=10;
            for(int i=L;i<=R;i++){
                a[i]==1;
            }

        }
        cout<<num<<endl;
    }

    return 0;

}
