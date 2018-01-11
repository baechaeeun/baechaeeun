#include<stdio.h>
int main()
{
	double a, b;
	printf("화씨 온도를 입력하세요 :");
	scanf("%lf", &a);
	b = 5.0 / 9 * (a - 32);
	printf("섭씨 온도는 %.1lf도입니다.", b);

	return 0;
}