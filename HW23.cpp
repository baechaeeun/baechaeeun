#include <stdio.h>
int main()
{
	int num1, num2, ch;

	while (1)
	{
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		ch = scanf("%d %d", &num1, &num2);
		if (ch != 2)
			break;
		if (num1 > num2)
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
		else
			printf("%d - %d = %d\n", num2, num1, num2 - num1);
	}
	return 0;
}