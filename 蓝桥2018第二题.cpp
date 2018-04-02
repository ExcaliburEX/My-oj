#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[8],b[8];
void binary(int c[],int k){
    if(k>=0){
        for(int i=0;i<8;i++){
            c[7-i]=k%2;
            k/=2;
        }
    }else{
        k=-k;
        k--;
        for(int i=0;i<8;i++){
            c[7-i]=k%2;
            k/=2;
        }
        for(int i=0;i<8;i++){
            if(c[i]==1)c[i]=0;
            else c[i]=1;
        }
    }
    for(int i=0;i<8;i++){
        if(c[i]==1)cout<<'*';
        else cout<<' ';
    }
}

int main(){
    int n,m,cnt=0;
    freopen("1.txt","r",stdin);
    while(cin>>n>>m){
            cnt++;
        if(cnt%8==0)cout<<endl;
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        binary(a,n);
        binary(b,m);
        cout<<endl;
    }
    return 0;

}
