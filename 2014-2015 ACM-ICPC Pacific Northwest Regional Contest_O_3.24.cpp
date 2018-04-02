#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;
struct node{
    double a,b;
    bool operator<(const node no)const{
        return a<no.a&&b>no.b;
    }
};

int num[210];
node a[200];
int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>a[i].a>>a[i].b;
            num[i]=1;
        }
       // sort(a,a+N);
        for(int i=1;i<N;i++){
            for(int j=0;j<i;j++){
                if(a[j]<a[i]&&num[j]+1>num[i])
                    num[i]=num[j]+1;
            }
        }
        int maxx=0;
        for(int i=0;i<N;i++)maxx=max(num[i],maxx);
        cout<<maxx<<endl;
    }
    return 0;
}
