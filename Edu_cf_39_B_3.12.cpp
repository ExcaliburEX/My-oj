/*
B. Weird Subtraction Process
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have two variables a and b. Consider the following sequence of actions performed with these variables:

If a?=?0 or b?=?0, end the process. Otherwise, go to step 2;
If a?¡Ý?2¡¤b, then set the value of a to a?-?2¡¤b, and repeat step 1. Otherwise, go to step 3;
If b?¡Ý?2¡¤a, then set the value of b to b?-?2¡¤a, and repeat step 1. Otherwise, end the process.
Initially the values of a and b are positive integers, and so the process will be finite.

You have to determine the values of a and b after the process ends.

Input
The only line of the input contains two integers n and m (1?¡Ü?n,?m?¡Ü?1018). n is the initial value of variable a, and m is the initial value of variable b.

Output
Print two integers ¡ª the values of a and b after the end of the process.

Examples
inputCopy
12 5
output
0 1
inputCopy
31 12
output
7 12
Note
Explanations to the samples:

a?=?12, b?=?5  a?=?2, b?=?5  a?=?2, b?=?1  a?=?0, b?=?1;
a?=?31, b?=?12  a?=?7, b?=?12.


*/
#include<ctime>  
#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
#define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	int start = clock();
    ll a,b;
    ios;
    cin>>a>>b;
    while(1){
        if(a==0||b==0) break;
        if(a>=2*b){
            a=a%(2*b);
        }
        else if(b>=2*a){
            b=b%(2*a);
        }
        else break;
    }
    cout<<a<<" "<<b<<endl;
    	printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);  
}
