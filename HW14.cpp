#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	char s[20];
	printf("* 문자열 입력 : ");
	fgets(s, 20, stdin);
	len = strlen(s);
	s[--len] = '\0';
	printf("[% *.*s...]\n", len, len / 2, s);
	return 0;
}
오후 11:07

