#include<stdio.h>
int main()
{
	int h, m;
	double km, v, s;
	printf("�Ÿ��� �Է��Ͻÿ�(km����) :");
	scanf("%lf", &km);
	printf("�ü��� �Է��Ͻÿ�(km/h����) :");
	scanf("%lf", &v);

	h = (int)(km / v);
	m = (int)(((km / v) - h) * 60);
	s = (((km / v) - h ) * 60-m)*60;

	printf("%lf = > %d�ð� %d�� %.3lf �� �ҿ��", km, h, m, s);

	return 0;
}