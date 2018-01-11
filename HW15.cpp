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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &kg);
	return kg;
}
double mInput()
{
	double m;
	printf("키를 입력하세요(m) : ");
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
		printf("당신의 BMI는 %.1lf으로 저체중입니다.\n", bmi);
	else if (bmi < 25.0)
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n", bmi);
	else if (bmi < 30.0)
		printf("당신의 BMI는 %.1lf으로 과체중입니다.\n", bmi);
	else if (bmi < 40.0)
		printf("당신의 BMI는 %.1lf으로 비만입니다.\n", bmi);
	else
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n", bmi);
}