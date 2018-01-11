#include<stdio.h>
int main()
{
	int h, m;
	double km, v, s;
	printf("거리를 입력하시오(km단위) :");
	scanf("%lf", &km);
	printf("시속을 입력하시오(km/h단위) :");
	scanf("%lf", &v);

	h = (int)(km / v);
	m = (int)(((km / v) - h) * 60);
	s = (((km / v) - h ) * 60-m)*60;

	printf("%lf = > %d시간 %d분 %.3lf 초 소요됨", km, h, m, s);

	return 0;
}