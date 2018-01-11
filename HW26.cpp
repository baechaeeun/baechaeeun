#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int input();
void output(int, int);
int random(int);
void myflush();

int main()
{
	int num, user, win = 0, draw = 0, lose = 0, res;

	while (lose != 1)
	{
		srand((unsigned int)time(NULL));
		num = random(3) + 1;
		user = input();
		if (user == 1 && num == 1)
			draw++;
		else if (user == 1 && num == 2)
			win++;
		else if (user == 2 && num == 2)
			draw++;
		else if (user == 2 && num == 3)
			win++;
		else if (user == 3 && num == 1)
			win++;
		else if (user == 3 && num == 3)
			draw++;
		else
			lose++;
		output(user, num);
	}
	printf("���Ӱ�� : %d �� %d ��\n", win, draw);
	return 0;
}
int input()
{
	int user, res;
	while (1)
	{
		printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		res = scanf("%d", &user);
		if (res != 1)
		{
			myflush();
			printf("������ �Է��ϼ��� : \n");
		}
		else
			break;

		if (user > 3 || user < 1)
			printf("���� ���� ������ �Է��ϼ��� : \n");
	}
	return user;
}
void output(int user, int num)
{
	if (user == 1 && num == 1)
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
	else if (user == 1 && num == 2)
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
	else if (user == 1 && num == 3)
		printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �����ϴ�.\n");
	else if (user == 2 && num == 1)
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n");
	else if (user == 2 && num == 2)
		printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
	else if (user == 2 && num == 3)
		printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n");
	else if (user == 3 && num == 1)
		printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
	else if (user == 3 && num == 2)
		printf("����� �� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n");
	else if (user == 3 && num == 3)
		printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
}
int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}
void myflush()
{
	while (getchar() != '\n');
}