#include<iostream>
#include<cstdio>
using namespace std;
int N;
void An(int cur, int n) {
	if (cur == n) {
		printf("sin(%d)", n);
		return;
	}
	printf("sin(%d",cur);
	if (cur % 2 == 0)printf("+");
	else printf("-");
	An(cur + 1, n);
	printf(")");
}
void Sn(int tag) {
	if (tag == 1) {
		An(1, tag);
		printf("+%d", N);
		return;
	}
	printf("(");
	Sn(tag - 1);
	printf(")");
	An(1, tag);
	printf("+%d", N - tag + 1);
}
int main() {
	while (cin>>N) {
		Sn(N);
		printf("\n");
	}
	return 0;
}