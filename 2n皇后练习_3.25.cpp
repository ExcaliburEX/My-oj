#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int WhiteQueen(int k);
int BlackQueen(int k);
int wqueen[1000];
int bqueen[1000];
int board[1000][1000];
int count1=0;
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    WhiteQueen(0);
    cout<<count1;
    return 0;
}

int WhiteQueen(int k){
    for(int i=0;i<k-1;i++){
            int judge=wqueen[i]-wqueen[k-1];
        if(judge==0||fabs(k-1-i)==fabs(judge))
            return 0;
    }
    if(k==n){
        BlackQueen(0);
        return 0;
    }
    for(int j=0;j<n;j++){
        if(board[k][j]){
            wqueen[k]=j;
            WhiteQueen(k+1);
        }
    }
}


int BlackQueen(int k){
    for(int i=0;i<k-1;i++){
        int judge=bqueen[i]-bqueen[k-1];
        if(judge==0||fabs(k-1-i)==fabs(judge))
           return 0;
    }
    if(k==n){
        count1++;
        return 0;
    }
    for(int j=0;j<n;j++){
        if(board[k][j]&&j!=wqueen[k]){
            bqueen[k]=j;
            BlackQueen(k+1);
        }
    }
}

