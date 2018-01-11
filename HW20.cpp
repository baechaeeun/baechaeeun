#include <stdio.h>
int input();
int totalCal(int);
int taxCal(int);
void output(int, int, int);
int main()
{
	int time, total, tax;
	time = input();
	total = totalCal(time);
	tax = taxCal(total);
	output(time, total, tax);
	return 0;
}
int input()
{
	int time;
	printf("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	scanf("%d", &time);
	return time;
}
int totalCal(int time)
{
	int total;

	if (time > 40)
		total = (40 * 3000) + ((time - 40) * 3000 * 1.5);
	else
		total = time * 3000;
	return total;
}
int taxCal(int total)
{
	int tax;

	if (total > 100000)
		tax = (100000 * 0.15) + ((total - 100000)*0.25);
	else
		tax = total * 0.15;
	return tax;
}
void output(int time, int total, int tax)
{
	printf("�ٹ��ð� %d �ð� : �Ѽ��� %d, ���� %d, �Ǽ��� %d\n", time, total, tax, total - tax);
}
���� 11:08

