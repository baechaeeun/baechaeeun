#include<stdio.h>
int main()
{
	int a, b, c, entire;
	double average;

	printf("����, ����, ���� ������ �Է��ϼ��� :");
	scanf("%d %d %d", &a, &b, &c);
	entire = a + b + c;
	average = entire / 3.0;

	printf("������ %d �̰� ����� %lf �Դϴ�.", entire, average);

	return 0;
}