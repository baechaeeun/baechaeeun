#include <stdio.h>
int main()
{
	char ch;
	int letter = 0, number = 0, space = 0, etc = 0;
	printf("# ���� ������ �Է� �Ͻÿ� : \n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			letter++;
		else if (ch >= 'a' && ch <= 'z')
			letter++;
		else if (ch >= '0' && ch <= '9')
			number++;
		else if (ch == ' ' || ch == '\t' || ch == '\n')
			space++;
		else
			etc++;
	}
	printf("* ������ ��ҹ��� ���� : %d��\n", letter);
	printf("* ���ڹ��� ���� : %d��\n", number);
	printf("* ���鹮��(space, tab, enter) ���� : %d��\n", space);
	printf("* �� �� ��Ÿ���� ���� : %d��\n", etc);
	return 0;
}
���� 10:22

