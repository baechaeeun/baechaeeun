#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int input();
void output(int, int);
void myflush();
int random(int);
int main()
{
	int num, unum, i = 0, bnum = 100, snum = 0;
	srand((unsigned int)time(NULL));
	num = random(100) + 1;

	while (1)
	{
		unum = input();
		i++;
		if (unum == num)
			break;
		if (unum > num)
			bnum = unum;
		else
			snum = unum;
		output(bnum, snum);
	}
	printf("���~ �¾Ҵ�~~~��ī��ī~~ %d ��° ���� ���߼̽��ϴ�.\n", i);
	return 0;
}
int input()
{
	int unum, res;
	while (1)
	{
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		res = scanf("%d", &unum);
		if (res != 1)
		{
			myflush();
			printf("������ �Է��ϼ���\n");
		}
		else
			break;
		if (unum < 1 || unum>100)
			printf("���� ���� ���� ���� �Է��ϼ���\n");
	}
	return unum;
}
void output(int bnum, int snum)
{
	printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", snum, bnum);
}
void myflush()
{
	while (getchar() != '\n');
}
int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}