#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=10000;i<=999999;i++){
        if(i<=99999){
            int tmp=i;
            int a,b,c,d,e;
            a=tmp%10;
            b=tmp/10%10;
            c=tmp/100%10;
            d=tmp/1000%10;
            e=tmp/10000;
            if(a==e&&b==d&&a+b+c+d+e==n)
                cout<<i<<endl;
        }else{
            int tmp=i;
            int a,b,c,d,e,f;
            a=tmp%10;
            b=tmp/10%10;
            c=tmp/100%10;
            d=tmp/1000%10;
            e=tmp/10000%10;
            f=tmp/100000;
            if(a==f&&b==e&&c==d&&a+b+c+d+e+f==n)
                cout<<i<<endl;
        }
    }
    return 0;
}
