#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	char name[30], g;
	double t;

	printf("# ���� �Է� : ");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[--len] = '\0';

	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &t);

	printf("# �����Է�(M/F) : ");
	getchar();
	scanf("%c", &g);

	if (g == 'M')
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, t);
	else if (g == 'F')
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, t);

	return 0;
}
���� 11:07

