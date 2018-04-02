/*
一根高筋拉面，中间切一刀，可以得到2根面条。

如果先对折1次，中间切一刀，可以得到3根面条。

如果连续对折2次，中间切一刀，可以得到5根面条。

那么，连续对折10次，中间切一刀，会得到多少面条呢？

答案是个整数，请通过浏览器提交答案。不要填写任何多余的内容。
*/

#include<iostream>
using namespace std;
int fib(int k) {
	if (k == 0)return 2;
	else return 2*fib(k-1)-1;
}

int main() {
	for (int i = 0; i < 11; i++)
	{
		cout << fib(i) << " ";
	}
	return 0;
}