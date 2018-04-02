#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	double x[4], y[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> x[i] >> y[i];
	}
	sort(x, x + 2);//这四步是将四个点变成主对角线上的点
	sort(x + 2, x + 4);
	sort(y, y + 2);
	sort(y + 2, y + 4);

	if (x[1] <= x[2] || x[0] >= x[3] || y[0] >= y[3] || y[1] <= y[2])
		printf("%.2lf\n", 0);
	else {
		sort(x, x + 4);//这两步是为了让两个正方形的位置保持左下右上的状态
		sort(y, y + 4);
		printf("%.2lf", (x[2] - x[1])*(y[2] - y[1]));
	}
	return 0;
}