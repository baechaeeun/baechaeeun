#include <stdio.h>
int kgInput();
double mInput();
double cal(int, double);
void output(double);
int main()
{
	int kg;
	double m, bmi;
	kg = kgInput();
	m = mInput();
	bmi = cal(kg, m);
	output(bmi);

	return 0;
}
int kgInput()
{
	int kg;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &kg);
	return kg;
}
double mInput()
{
	double m;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &m);
	return m;
}
double cal(int kg, double m)
{
	double bmi;
	bmi = kg / (m * m);
	return bmi;
}
void output(double bmi)
{
	if (bmi < 18.5)
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", bmi);
	else if (bmi < 25.0)
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.\n", bmi);
	else if (bmi < 30.0)
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", bmi);
	else if (bmi < 40.0)
		printf("����� BMI�� %.1lf���� ���Դϴ�.\n", bmi);
	else
		printf("����� BMI�� %.1lf���� �����Դϴ�.\n", bmi);
}