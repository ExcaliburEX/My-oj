#include<iostream>

using namespace std;

int main(){
    for(int i=1000;i<=9999;i++){
        int tmp=i;
        int a,b,c,d;
        a=tmp%10;
        b=tmp/10%10;
        c=tmp/100%10;
        d=tmp/1000;
        if(a==d&&b==c)cout<<i<<endl;

    }
    return 0;

}

