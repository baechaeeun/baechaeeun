#include<stdio.h>
int main()
{
	int i, day, sum, s, entire;
	printf("����� �ٹ��ϼ��� �Է��Ͻÿ� :");
	scanf("%d", &day);

	sum = 0;
	s = 0;

	for (i = 1; sum+i <= day; i++) {
		sum += i;
		s += (i*i);
	}
	entire = (day - sum)*i+s;

	printf("�ٹ��� : %d �� / �� ��ȭ �� %d ��", day, entire);

	return 0;
}
