/*
A/B
Time Limit: 1000/1000 MS (Java/Others)    Memory Limit: 32768/32768 K (Java/Others)
Total Submission(s): 7340    Accepted Submission(s): 5824


Problem Description
要求(A/B)%9973，但由于A很大，我们只给出n(n=A%9973)(我们给定的A必能被B整除，且gcd(B,9973) = 1)。
 

Input
数据的第一行是一个T，表示有T组数据。
每组数据有两个数n(0 <= n < 9973)和B(1 <= B <= 10^9)。
 

Output
对应每组数据输出(A/B)%9973。
 

Sample Input
2
1000 53
87 123456789
 

Sample Output
7922
6060
 

Author
xhd
 

Source
HDU 2007-1 Programming Contest
 

Recommend
linle



逆元知识点
hdu5685
hud5225
hdu5976

*/

#include <cstdio>
#include <cstring>
using namespace std;
#define mod(x, y) (x % y + y) % y
#define ll long long
ll exgcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll d = exgcd(b, a % b, x, y);
    ll t = y;
    y = x - a / b * y;
    x = t;
    return d;
}
ll ine(ll a, ll n)
{
    ll x, y;
    exgcd(a, n, x, y);
    return mod(x, n);
}
int main()
{
    ll a, b;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", a * ine(b, 9973) % 9973);
    }
    return 0;
}
