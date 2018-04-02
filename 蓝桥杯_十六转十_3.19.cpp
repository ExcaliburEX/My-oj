
#include<stdio.h>
int main()
{
	char s[15];
	__int64 i, n = 0;

	//printf("输入十六进制数:\n");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
			n = n * 16 + s[i] - '0';
		if (s[i] >= 'a'&&s[i] <= 'f')
			n = n * 16 + s[i] - 'a' + 10;
		if (s[i] >= 'A'&&s[i] <= 'F')
			n = n * 16 + s[i] - 'A' + 10;
	}
	printf("%lld", n);
	return 0;
}