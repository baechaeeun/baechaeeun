#include<stdio.h>
int main() {
	int i, j;

	for (i = 1; i < 11; i++) {
		for (j = 10*i-9; j < 10*i+1; j++) {

			if (j % 3 == 0 && j % 5 == 0)
				printf("%d ", j);
			else if (j% 3 == 0)
				printf("* ");
			else if (j % 5 == 0)
				printf("# ");
			else
				printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}