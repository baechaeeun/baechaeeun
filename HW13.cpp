#include <stdio.h>
#include <string.h>
int main()
{
	int len1, len2;
	char fn[20], name[20];

	printf("#���� �Է��Ͻÿ� : ");
	fgets(fn, 20, stdin);

	printf("#�̸��� �Է��Ͻÿ� : ");
	fgets(name, 20, stdin);

	len1 = strlen(fn);
	fn[--len1] = '\0';
	len2 = strlen(name);
	name[--len2] = '\0';

	printf("%s %s\n", fn, name);
	printf("%*d %*d\n", len1, len1, len2, len2);

	return 0;
}