#include <stdio.h>
int input();
int yearCheck(int);
void output(int, int);
int main()
{
	int year = input();
	int yc = yearCheck(year);
	output(year, yc);
	return 0;
}
int input()
{
	int year;
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);
	return year;
}
int yearCheck(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0;
}
void output(int year, int yc)
{
	if (yc == 1)
		printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	else
		printf("%d���� ���(Common year)�Դϴ�.\n", year);
}
���� 11:08

