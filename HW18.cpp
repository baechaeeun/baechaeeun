#include <stdio.h>
int inputA();
int inputN();
void output(int, int);
int main()
{
	int age, num, mon, pay, sale = 0;
	age = inputA();
	num = inputN();

	if (age <= 7)
		mon = 500;
	else if (age <= 13)
		mon = 700;
	else if (age <= 19)
		mon = 1000;
	else if (age <= 55)
		mon = 1500;
	else
		mon = 500;

	if (num >= 5)
		sale = mon * num * 0.1;

	pay = mon * num;

	output(pay, sale);

	return 0;
}
int inputA()
{
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}
int inputN()
{
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}
void output(int pay, int sale)
{
	printf("����� => %d��\n", pay);
	printf("���αݾ� => %d��\n", sale);
	printf("�����ݾ� => %d��\n", pay - sale);
}