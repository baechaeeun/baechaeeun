#include <stdio.h>
int main()
{
	char ch;
	int letter = 0, number = 0, space = 0, etc = 0;
	printf("# 영문 문장을 입력 하시오 : \n");
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
	printf("* 영문자 대소문자 개수 : %d개\n", letter);
	printf("* 숫자문자 개수 : %d개\n", number);
	printf("* 여백문자(space, tab, enter) 개수 : %d개\n", space);
	printf("* 그 외 기타문자 개수 : %d개\n", etc);
	return 0;
}
오후 10:22

