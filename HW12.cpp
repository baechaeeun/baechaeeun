#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	char name[30];
	printf("이름을 입력하시오 : ");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[len - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}