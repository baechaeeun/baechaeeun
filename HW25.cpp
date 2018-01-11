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
	printf("우와~ 맞았당~~~추카추카~~ %d 번째 만에 맞추셨습니다.\n", i);
	return 0;
}
int input()
{
	int unum, res;
	while (1)
	{
		printf("# 숫자를 입력하시오 : ");
		res = scanf("%d", &unum);
		if (res != 1)
		{
			myflush();
			printf("정수를 입력하세요\n");
		}
		else
			break;
		if (unum < 1 || unum>100)
			printf("범위 내의 정수 값을 입력하세요\n");
	}
	return unum;
}
void output(int bnum, int snum)
{
	printf("%d 보다는 크고 %d 보다는 작습니다.\n", snum, bnum);
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