/*

Big Number
Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 40867    Accepted Submission(s): 20010


Problem Description
In many applications very large integers numbers are required. Some of these applications are using keys for secure transmission of data, encryption, etc. In this problem you are given a number, you have to determine the number of digits in the factorial of the number.
 

Input
Input consists of several lines of integer numbers. The first line contains an integer n, which is the number of cases to be tested, followed by n lines, one integer 1 ≤ n ≤ 107 on each line.
 

Output
The output contains the number of digits in the factorial of the integers appearing in the input.
 

Sample Input
2
10
20
 

Sample Output
7
19
 

Source
Asia 2002, Dhaka (Bengal)

斯特灵公式的应用
整数n的位数为[lgn]+1
利用Stirling公式计算n!结果的位数时，可以两边取对数，得:
	log10(n!) = log10(2*n*Pi)/2+n*log10(n/e)
则答案为：
	ans = log10(2*n*Pi)/2+n*log10(n/e) + 1

    
hdu4045 hdu2521
*/

#include <bits/stdc++.h>
using namespace std;

const double Pi = acos(-1);
const double e = 2.718281828459;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", (int)(log10(2.0 * Pi * n) / 2.0 + n * log10(n / e) + 1));
    }
    return 0;
}
