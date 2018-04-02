#include<iostream>

using namespace std;
int a[34][34];
int main(){
    a[0][0]=1;
    a[1][0]=a[1][1]=1;
    for(int i=2;i<34;i++)
        for(int j=0;j<i+1;j++){
            if(j==0)a[i][j]=1;
            else if(j==i+1)a[i][j]=1;
            else {a[i][j]=a[i-1][j-1]+a[i-1][j];}
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=0)cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
