#include<stdio.h>
int main()
{
	int i, day, sum, s, entire;
	printf("기사의 근무일수를 입력하시오 :");
	scanf("%d", &day);

	sum = 0;
	s = 0;

	for (i = 1; sum+i <= day; i++) {
		sum += i;
		s += (i*i);
	}
	entire = (day - sum)*i+s;

	printf("근무일 : %d 일 / 총 금화 수 %d 개", day, entire);

	return 0;
}
