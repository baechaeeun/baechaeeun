#include<stdio.h>
int main()
{
	int i, sum = 0, n;

	for (i = 0; i < 5; i++) {
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ", i + 1);
		scanf("%d", &n);

		sum += n;

		if (n <= 0)
		{
			i--;
			sum-=n;
		}

	}

	printf("�Էµ� ���� �� �� : %d", sum);

	return 0;
}