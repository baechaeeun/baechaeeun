#include<stdio.h>
int main()
{
	int second = 54321;
	int h, m, s;

	h = second / 3600;
	m = (second - h * 3600) / 60;
	s = (second - h * 3600 - m * 60);

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", second, h, m, s);

	return 0;
}