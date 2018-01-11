#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = i; j <= i + 90; j += 10) {
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}