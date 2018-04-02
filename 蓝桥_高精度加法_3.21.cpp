#include<stdio.h>
#include<string.h>

int main() {
	int i, len1, len2;
	char a[101], b[101], c[102];
	memset(c, 0, sizeof(c));
	scanf("%s%s", a, b);
	len1 = strlen(a);
	len2 = strlen(b);
	for (i = 0; i < len1 || i<len2; i++)
	{
		if (i < len1)c[i] += a[len1 - i - 1] - '0';
		if (i < len2)c[i] += b[len2 - i - 1] - '0';
		if (c[i] >= 10) {
			c[i + 1] = c[i] / 10;
			c[i] %= 10;
		}
	}
	if (len1 < len2)len1 = len2;
	if (c[len1] > 0)printf("%d", c[len1]);
	for (i = len1 - 1; i >= 0; i--)
	{
		printf("%d", c[i]);
	}
	return 0;

}
