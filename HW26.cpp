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
	printf("게임결과 : %d 승 %d 무\n", win, draw);
	return 0;
}
int input()
{
	int user, res;
	while (1)
	{
		printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		res = scanf("%d", &user);
		if (res != 1)
		{
			myflush();
			printf("정수를 입력하세요 : \n");
		}
		else
			break;

		if (user > 3 || user < 1)
			printf("범위 내의 정수를 입력하세요 : \n");
	}
	return user;
}
void output(int user, int num)
{
	if (user == 1 && num == 1)
		printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n");
	else if (user == 1 && num == 2)
		printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n");
	else if (user == 1 && num == 3)
		printf("당신은 바위 선택, 컴퓨터는 보 선택 : 당신이 졌습니다.\n");
	else if (user == 2 && num == 1)
		printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 당신이 졌습니다.\n");
	else if (user == 2 && num == 2)
		printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n");
	else if (user == 2 && num == 3)
		printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n");
	else if (user == 3 && num == 1)
		printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n");
	else if (user == 3 && num == 2)
		printf("당신은 보 선택, 컴퓨터는 가위 선택 : 당신이 졌습니다.\n");
	else if (user == 3 && num == 3)
		printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n");
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