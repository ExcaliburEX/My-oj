/*
Goldbach's Conjecture
Time Limit: 1000MS		Memory Limit: 65536K
Total Submissions: 47687		Accepted: 18156
Description

In 1742, Christian Goldbach, a German amateur mathematician, sent a letter to Leonhard Euler in which he made the following conjecture:
Every even number greater than 4 can be
written as the sum of two odd prime numbers.

For example:
8 = 3 + 5. Both 3 and 5 are odd prime numbers.
20 = 3 + 17 = 7 + 13.
42 = 5 + 37 = 11 + 31 = 13 + 29 = 19 + 23.

Today it is still unproven whether the conjecture is right. (Oh wait, I have the proof of course, but it is too long to write it on the margin of this page.)
Anyway, your task is now to verify Goldbach's conjecture for all even numbers less than a million.
Input

The input will contain one or more test cases.
Each test case consists of one even integer n with 6 <= n < 1000000.
Input will be terminated by a value of 0 for n.
Output

For each test case, print one line of the form n = a + b, where a and b are odd primes. Numbers and operators should be separated by exactly one blank like in the sample output below. If there is more than one pair of odd primes adding up to n, choose the pair where the difference b - a is maximized. If there is no such pair, print a line saying "Goldbach's conjecture is wrong."
Sample Input

8
20
42
0
Sample Output

8 = 3 + 5
20 = 3 + 17
42 = 5 + 37
Source

Ulm Local 1998
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#define N 1000001
using namespace std;
bool a[N];
void primelist()//0ÊÇËØÊý
{
     a[0]=a[1]=1;
     for(int i=2;i<N;i++)
        if(!a[i])
           for(int j=i*2;j<N;j+=i)
              a[j]=1;
 }
int main()
{
    int n;primelist();
    for(int i=0;i<1000;i++){
        cout<<"a["<<i<<"]="<<a[i]<<"  "<<'\t';
        if(i%5==0)cout<<endl;
    }
    while(scanf("%d",&n))
    {
        if(n==0)break;
        for(int i=0;i<=n;i++)
        {
            if(!a[i]&&!a[n-i])
            {
            printf("%d = %d + %d\n",n,i,n-i);
            break;
            }
        }
    }
    return 0;
}
