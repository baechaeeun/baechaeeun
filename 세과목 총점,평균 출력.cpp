#include<stdio.h>
int main()
{
	int a, b, c, entire;
	double average;

	printf("역사, 문학, 예능 점수를 입력하세요 :");
	scanf("%d %d %d", &a, &b, &c);
	entire = a + b + c;
	average = entire / 3.0;

	printf("총점은 %d 이고 평균은 %lf 입니다.", entire, average);

	return 0;
}