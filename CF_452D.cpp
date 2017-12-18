/*
D. Shovel Sale
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n shovels in Polycarp's shop. The i-th shovel costs i burles, that is, the first shovel costs 1 burle, the second shovel costs 2 burles, the third shovel costs 3 burles, and so on. Polycarps wants to sell shovels in pairs.

Visitors are more likely to buy a pair of shovels if their total cost ends with several 9s. Because of this, Polycarp wants to choose a pair of shovels to sell in such a way that the sum of their costs ends with maximum possible number of nines. For example, if he chooses shovels with costs 12345 and 37454, their total cost is 49799, it ends with two nines.

You are to compute the number of pairs of shovels such that their total cost ends with maximum possible number of nines. Two pairs are considered different if there is a shovel presented in one pair, but not in the other.

Input
The first line contains a single integer n (2?¡Ü?n?¡Ü?109) ¡ª the number of shovels in Polycarp's shop.

Output
Print the number of pairs of shovels such that their total cost ends with maximum possible number of nines.

Note that it is possible that the largest number of 9s at the end is 0, then you should count all such ways.

It is guaranteed that for every n?¡Ü?109 the answer doesn't exceed 2¡¤109.

Examples
input
7
output
3
input
14
output
9
input
50
output
1
Note
In the first example the maximum possible number of nines at the end is one. Polycarp cah choose the following pairs of shovels for that purpose:

2 and 7;
3 and 6;
4 and 5.
In the second example the maximum number of nines at the end of total cost of two shovels is one. The following pairs of shovels suit Polycarp:

1 and 8;
2 and 7;
3 and 6;
4 and 5;
5 and 14;
6 and 13;
7 and 12;
8 and 11;
9 and 10.
In the third example it is necessary to choose shovels 49 and 50, because the sum of their cost is 99, that means that the total number of nines is equal to two, which is maximum possible for n?=?50.


*/


#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n;
ll ans;
int main()
{
	cin >> n;
	if (n >= 500000000) {
		ans += min((ll)499999999, n - 500000000 + 1);
		if (n == 1000000000)ans++;
	}
	else if (n >= 50000000) {
		if (min((ll)49999999, n - 50000000 + 1) > 0)
			ans += min((ll)49999999, n - 50000000 + 1);
		if (min((ll)199999999 / 2, n - 199999999 / 2) > 0)
			ans += min((ll)199999999 / 2, n - 199999999 / 2);
		if (min((ll)299999999 / 2, n - 299999999 / 2) > 0)
			ans += min((ll)299999999 / 2, n - 299999999 / 2);
		if (min((ll)399999999 / 2, n - 399999999 / 2) > 0)
			ans += min((ll)399999999 / 2, n - 399999999 / 2);
		if (min((ll)499999999 / 2, n - 499999999 / 2) > 0)
			ans += min((ll)499999999 / 2, n - 499999999 / 2);
		if (min((ll)599999999 / 2, n - 599999999 / 2) > 0)
			ans += min((ll)599999999 / 2, n - 599999999 / 2);
		if (min((ll)699999999 / 2, n - 699999999 / 2) > 0)
			ans += min((ll)699999999 / 2, n - 699999999 / 2);
		if (min((ll)799999999 / 2, n - 799999999 / 2) > 0)
			ans += min((ll)799999999 / 2, n - 799999999 / 2);
		if (min((ll)899999999 / 2, n - 899999999 / 2) > 0)
			ans += min((ll)899999999 / 2, n - 899999999 / 2);
	}
	else if (n >= 5000000) {
		if (min((ll)4999999, n - 5000000 + 1) > 0)
			ans += min((ll)4999999, n - 5000000 + 1);
		if (min((ll)19999999 / 2, n - 19999999 / 2) > 0)
			ans += min((ll)19999999 / 2, n - 19999999 / 2);
		if (min((ll)29999999 / 2, n - 29999999 / 2) > 0)
			ans += min((ll)29999999 / 2, n - 29999999 / 2);
		if (min((ll)39999999 / 2, n - 39999999 / 2) > 0)
			ans += min((ll)39999999 / 2, n - 39999999 / 2);
		if (min((ll)49999999 / 2, n - 49999999 / 2) > 0)
			ans += min((ll)49999999 / 2, n - 49999999 / 2);
		if (min((ll)59999999 / 2, n - 59999999 / 2) > 0)
			ans += min((ll)59999999 / 2, n - 59999999 / 2);
		if (min((ll)69999999 / 2, n - 69999999 / 2) > 0)
			ans += min((ll)69999999 / 2, n - 69999999 / 2);
		if (min((ll)79999999 / 2, n - 79999999 / 2) > 0)
			ans += min((ll)79999999 / 2, n - 79999999 / 2);
		if (min((ll)89999999 / 2, n - 89999999 / 2) > 0)
			ans += min((ll)89999999 / 2, n - 89999999 / 2);
	}
	else if (n >= 500000) {
		if (min((ll)499999, n - 500000 + 1) > 0)
			ans += min((ll)499999, n - 500000 + 1);
		if (min((ll)1999999 / 2, n - 1999999 / 2) > 0)
			ans += min((ll)1999999 / 2, n - 1999999 / 2);
		if (min((ll)2999999 / 2, n - 2999999 / 2) > 0)
			ans += min((ll)2999999 / 2, n - 2999999 / 2);
		if (min((ll)3999999 / 2, n - 3999999 / 2) > 0)
			ans += min((ll)3999999 / 2, n - 3999999 / 2);
		if (min((ll)4999999 / 2, n - 4999999 / 2) > 0)
			ans += min((ll)4999999 / 2, n - 4999999 / 2);
		if (min((ll)5999999 / 2, n - 5999999 / 2) > 0)
			ans += min((ll)5999999 / 2, n - 5999999 / 2);
		if (min((ll)6999999 / 2, n - 6999999 / 2) > 0)
			ans += min((ll)6999999 / 2, n - 6999999 / 2);
		if (min((ll)7999999 / 2, n - 7999999 / 2) > 0)
			ans += min((ll)7999999 / 2, n - 7999999 / 2);
		if (min((ll)8999999 / 2, n - 8999999 / 2) > 0)
			ans += min((ll)8999999 / 2, n - 8999999 / 2);
	}
	else if (n >= 50000) {
		if (min((ll)49999, n - 50000 + 1) > 0)
			ans += min((ll)49999, n - 50000 + 1);
		if (min((ll)199999 / 2, n - 199999 / 2) > 0)
			ans += min((ll)199999 / 2, n - 199999 / 2);
		if (min((ll)299999 / 2, n - 299999 / 2) > 0)
			ans += min((ll)299999 / 2, n - 299999 / 2);
		if (min((ll)399999 / 2, n - 399999 / 2) > 0)
			ans += min((ll)399999 / 2, n - 399999 / 2);
		if (min((ll)499999 / 2, n - 499999 / 2) > 0)
			ans += min((ll)499999 / 2, n - 499999 / 2);
		if (min((ll)599999 / 2, n - 599999 / 2) > 0)
			ans += min((ll)599999 / 2, n - 599999 / 2);
		if (min((ll)699999 / 2, n - 699999 / 2) > 0)
			ans += min((ll)699999 / 2, n - 699999 / 2);
		if (min((ll)799999 / 2, n - 799999 / 2) > 0)
			ans += min((ll)799999 / 2, n - 799999 / 2);
		if (min((ll)899999 / 2, n - 899999 / 2) > 0)
			ans += min((ll)899999 / 2, n - 899999 / 2);
	}
	else if (n >= 5000) {
		if (min((ll)4999, n - 5000 + 1) > 0)
			ans += min((ll)4999, n - 5000 + 1);
		if (min((ll)19999 / 2, n - 19999 / 2) > 0)
			ans += min((ll)19999 / 2, n - 19999 / 2);
		if (min((ll)29999 / 2, n - 29999 / 2) > 0)
			ans += min((ll)29999 / 2, n - 29999 / 2);
		if (min((ll)39999 / 2, n - 39999 / 2) > 0)
			ans += min((ll)39999 / 2, n - 39999 / 2);
		if (min((ll)49999 / 2, n - 49999 / 2) > 0)
			ans += min((ll)49999 / 2, n - 49999 / 2);
		if (min((ll)59999 / 2, n - 59999 / 2) > 0)
			ans += min((ll)59999 / 2, n - 59999 / 2);
		if (min((ll)69999 / 2, n - 69999 / 2) > 0)
			ans += min((ll)69999 / 2, n - 69999 / 2);
		if (min((ll)79999 / 2, n - 79999 / 2) > 0)
			ans += min((ll)79999 / 2, n - 79999 / 2);
		if (min((ll)89999 / 2, n - 89999 / 2) > 0)
			ans += min((ll)89999 / 2, n - 89999 / 2);
	}
	else if (n >= 500) {
		if (min((ll)499, n - 500 + 1) > 0)
			ans += min((ll)499, n - 500 + 1);
		if (min((ll)1999 / 2, n - 1999 / 2) > 0)
			ans += min((ll)1999 / 2, n - 1999 / 2);
		if (min((ll)2999 / 2, n - 2999 / 2) > 0)
			ans += min((ll)2999 / 2, n - 2999 / 2);
		if (min((ll)3999 / 2, n - 3999 / 2) > 0)
			ans += min((ll)3999 / 2, n - 3999 / 2);
		if (min((ll)4999 / 2, n - 4999 / 2) > 0)
			ans += min((ll)4999 / 2, n - 4999 / 2);
		if (min((ll)5999 / 2, n - 5999 / 2) > 0)
			ans += min((ll)5999 / 2, n - 5999 / 2);
		if (min((ll)6999 / 2, n - 6999 / 2) > 0)
			ans += min((ll)6999 / 2, n - 6999 / 2);
		if (min((ll)7999 / 2, n - 7999 / 2) > 0)
			ans += min((ll)7999 / 2, n - 7999 / 2);
		if (min((ll)8999 / 2, n - 8999 / 2) > 0)
			ans += min((ll)8999 / 2, n - 8999 / 2);
	}
	else if (n >= 50) {
		if (min((ll)49, n - 50 + 1) > 0)
			ans += min((ll)49, n - 50 + 1);
		if (min((ll)199 / 2, n - 199 / 2) > 0)
			ans += min((ll)199 / 2, n - 199 / 2);
		if (min((ll)299 / 2, n - 299 / 2) > 0)
			ans += min((ll)299 / 2, n - 299 / 2);
		if (min((ll)399 / 2, n - 399 / 2) > 0)
			ans += min((ll)399 / 2, n - 399 / 2);
		if (min((ll)499 / 2, n - 499 / 2) > 0)
			ans += min((ll)499 / 2, n - 499 / 2);
		if (min((ll)599 / 2, n - 599 / 2) > 0)
			ans += min((ll)599 / 2, n - 599 / 2);
		if (min((ll)699 / 2, n - 699 / 2) > 0)
			ans += min((ll)699 / 2, n - 699 / 2);
		if (min((ll)799 / 2, n - 799 / 2) > 0)
			ans += min((ll)799 / 2, n - 799 / 2);
		if (min((ll)899 / 2, n - 899 / 2) > 0)
			ans += min((ll)899 / 2, n - 899 / 2);
	}
	else if (n >= 5) {
		if (min((ll)4, n - 5 + 1) > 0)
			ans += min((ll)4, n - 5 + 1);
		if (min((ll)19 / 2, n - 19 / 2) > 0)
			ans += min((ll)19 / 2, n - 19 / 2);
		if (min((ll)29 / 2, n - 29 / 2) > 0)
			ans += min((ll)29 / 2, n - 29 / 2);
		if (min((ll)39 / 2, n - 39 / 2) > 0)
			ans += min((ll)39 / 2, n - 39 / 2);
		if (min((ll)49 / 2, n - 49 / 2) > 0)
			ans += min((ll)49 / 2, n - 49 / 2);
		if (min((ll)59 / 2, n - 59 / 2) > 0)
			ans += min((ll)59 / 2, n - 59 / 2);
		if (min((ll)69 / 2, n - 69 / 2) > 0)
			ans += min((ll)69 / 2, n - 69 / 2);
		if (min((ll)79 / 2, n - 79 / 2) > 0)
			ans += min((ll)79 / 2, n - 79 / 2);
		if (min((ll)89 / 2, n - 89 / 2) > 0)
			ans += min((ll)89 / 2, n - 89 / 2);
	}
	else if (n == 4)return cout << 6, 0;
	else if (n == 3)return cout << 3, 0;
	else if (n == 2)return cout << 1, 0;
	cout << ans;
}

