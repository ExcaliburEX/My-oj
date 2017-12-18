/*
C. Dividing the numbers
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya has n integers: 1,?2,?3,?...,?n. He wants to split these integers in two non-empty groups in such a way that the absolute difference of sums of integers in each group is as small as possible.

Help Petya to split the integers. Each of n integers should be exactly in one group.

Input
The first line contains a single integer n (2?¡Ü?n?¡Ü?60?000) ¡ª the number of integers Petya has.

Output
Print the smallest possible absolute difference in the first line.

In the second line print the size of the first group, followed by the integers in that group. You can print these integers in arbitrary order. If there are multiple answers, print any of them.

Examples
input
4
output
0
2 1 4 
input
2
output
1
1 1 
Note
In the first example you have to put integers 1 and 4 in the first group, and 2 and 3 in the second. This way the sum in each group is 5, and the absolute difference is 0.

In the second example there are only two integers, and since both groups should be non-empty, you have to put one integer in the first group and one in the second. This way the absolute difference of sums of integers in each group is 1.





*/


#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {  
	int n;
	std::cin >> n;
	if (n%4==0) {
		std::cout << "0\n" << n/2;
		for(int i = 1; i < n/2; i+=2) {
			std::cout << " " << i << " " << n+1-i;
		}
	} else if (n%4==1) {
		std::cout << "1\n" << n/2;
		for(int i = 1; i < (n-1)/2; i+=2) {
			std::cout << " " << i+1 << " " << n+1-i;
		}
	} else if (n%4==2) {
		std::cout << "1\n" << n/2;
		for(int i = 1; i < n/2-1; i+=2) {
			std::cout << " " << i << " " << n+1-i;
		}
		std::cout << " " << n/2 << '\n';
	} else {
		std::cout << "0\n" << n/2+1 << " 1";
		for(int i = 1; i < n/2-1; i+=2) {
			std::cout << " " << i+1 << " " << n+1-i;
		}
		std::cout << " " << n/2+1 << '\n';
	}
	return 0;
}
