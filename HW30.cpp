#include<stdio.h>
int main()
{
	int n, res, i;

	printf("*10���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("%d(10) = ", n);


	for (i = 0; i < 32; i++) {
		res = n & 0x80000000;

		if (res == 0)
			printf("0");
		else
			printf("1");

		n = n << 1;
	}

	printf("(2)");

	return 0;
}
