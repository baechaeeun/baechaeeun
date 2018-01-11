#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	char name[30], g;
	double t;

	printf("# 성명 입력 : ");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[--len] = '\0';

	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &t);

	printf("# 성별입력(M/F) : ");
	getchar();
	scanf("%c", &g);

	if (g == 'M')
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n", name, t);
	else if (g == 'F')
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n", name, t);

	return 0;
}
오후 11:07

