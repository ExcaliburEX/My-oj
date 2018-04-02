#include<iostream>
#include<algorithm>

using namespace std;
int a[200];

int main(){
    int n,i=0;
    cin>>n;
    int n0=n;
    while(n--){
        cin>>a[i++];

    }
    sort(a,a+n0);
    for(int i=0;i<n0;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
