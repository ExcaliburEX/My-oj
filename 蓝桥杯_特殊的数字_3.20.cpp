#include<iostream>


using namespace std;

int main(){
    for(int i=2;i<=999;i++){
        int tmp=i;
        int a,b,c;
        a=tmp%10;
        b=tmp/10%10;
        c=tmp/100;
        if((a*a*a+b*b*b+c*c*c)==i)cout<<i<<endl;
    }
    return 0;
}
