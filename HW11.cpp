#include<stdio.h>
int main()
{
	int a;
	printf("ASCII code값을 입력하시오 :");
	scanf("%d", &a);
	printf("%d은 ""'%c'""의 ASCII code 입니다.", a, a);

	return 0;
}
