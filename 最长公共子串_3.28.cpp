#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char a[50],b[50];
int dp[50][50];
int maxlen;
int main(){
    gets(a);
    gets(b);
    for(int i=0;i<strlen(a);i++)
        for(int j=0;j<strlen(b);j++){
            if(a[i]==b[j]){
                if(i>0&&j>0){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=1;
                }
                if(maxlen<dp[i][j]){
                maxlen=dp[i][j];
            }
        }
    }
    cout<<maxlen;
    return 0;
}
