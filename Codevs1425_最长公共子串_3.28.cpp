#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str[25];
    cin>>n;
    int min_len=INT_MAX;

    for(int i=0;i<n;i++){
        cin>>str[i];
         if(str[i].size()<min_len)min_len=str[i].size();
    }

    if(n==1){
        cout<<str[0];
        return 0;
    }
    for(int i=min_len;i>=0;i--){
        for(int j=0;j<str[0].size()-i;j++){
            int flag=1;
            for(int k=1;k<n;k++)
                if(str[k].find(str[0].substr(j,i))==string::npos)
                    flag=0;
            if(flag){
                cout<<str[0].substr(j,i);
                return 0;
            }
        }
    }
    return 0;
}
