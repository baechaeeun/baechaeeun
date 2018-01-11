#include<stdio.h>
int main()
{
	int second = 54321;
	int h, m, s;

	h = second / 3600;
	m = (second - h * 3600) / 60;
	s = (second - h * 3600 - m * 60);

	printf("%d초는 %d시간 %d분 %d초 입니다.", second, h, m, s);

	return 0;
}