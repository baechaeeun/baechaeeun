#include<stdio.h>
int main()
{
	double a, b;
	printf("ȭ�� �µ��� �Է��ϼ��� :");
	scanf("%lf", &a);
	b = 5.0 / 9 * (a - 32);
	printf("���� �µ��� %.1lf���Դϴ�.", b);

	return 0;
}