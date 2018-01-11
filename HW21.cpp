#include <stdio.h>
int main()
{
	int i = 1;
	double tall, total = 0, avg;
	while (i < 6)
	{
		printf("- %d 번 학생의 키는? ", i);
		scanf("%lf", &tall);
		total += tall;
		i++;
	}
	avg = total / 5;
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", avg);
	return 0;
}