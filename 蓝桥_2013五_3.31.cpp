# include <stdio.h>
char* prefix(char* haystack_start, char* needle_start)
{
	char* haystack = haystack_start;
	char* needle = needle_start;

	while (*haystack && *needle) {
		if (*(haystack++) != *(needle++)) return NULL;  //���λ��
	}

	if (*needle) return NULL;

	return haystack_start;
}

int main(void)
{
	char  *haystack[10]= "abc1234";  //Ҫ�жϵ��ַ��� 
	char  *needle[10]="abc" ;  //ǰ׺
	printf("%s\n", prefix(haystack, needle));
}