#include <stdio.h>
int main()
{
	int i = 1;
	double tall, total = 0, avg;
	while (i < 6)
	{
		printf("- %d �� �л��� Ű��? ", i);
		scanf("%lf", &tall);
		total += tall;
		i++;
	}
	avg = total / 5;
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", avg);
	return 0;
}