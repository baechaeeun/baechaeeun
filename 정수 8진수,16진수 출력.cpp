#include<stdio.h>
int input();
int main()
{
	int number;
	printf("�������� �Է��ϼ��� :");
	number = input();
	printf("�Էµ� ���� 8 ������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16 ������ %#x�Դϴ�.", number);

	return 0;
}
int input() {
	int a;
	scanf("%d", &a);
	return a;
}