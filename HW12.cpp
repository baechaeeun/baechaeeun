#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	char name[30];
	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[len - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}