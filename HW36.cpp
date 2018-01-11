#include<stdio.h>
int main()
{
	int i, sum = 0, n;

	for (i = 0; i < 5; i++) {
		printf("0보다 큰수를 입력하시오(%d 번째) : ", i + 1);
		scanf("%d", &n);

		sum += n;

		if (n <= 0)
		{
			i--;
			sum-=n;
		}

	}

	printf("입력된 값의 총 합 : %d", sum);

	return 0;
}