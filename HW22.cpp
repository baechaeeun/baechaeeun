#include <stdio.h>
int input();
int main()
{
	int num = input(), i = 1;
	while (i <= num)
	{
		printf("*");
		if (i % 5 == 0)
			printf("\n");
		i++;
	}
	printf("\n");
	return 0;
}
int input()
{
	int num;
	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &num);
	return num;
}
오후 11:09

