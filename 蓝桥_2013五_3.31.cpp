# include <stdio.h>
char* prefix(char* haystack_start, char* needle_start)
{
	char* haystack = haystack_start;
	char* needle = needle_start;

	while (*haystack && *needle) {
		if (*(haystack++) != *(needle++)) return NULL;  //Ìî¿ÕÎ»ÖÃ
	}

	if (*needle) return NULL;

	return haystack_start;
}

int main(void)
{
	char  *haystack[10]= "abc1234";  //ÒªÅĞ¶ÏµÄ×Ö·û´® 
	char  *needle[10]="abc" ;  //Ç°×º
	printf("%s\n", prefix(haystack, needle));
}