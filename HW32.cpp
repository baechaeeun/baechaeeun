#include<stdio.h>
void myflush();
int menu();
int inputInt(char *);
int deposit(int);
int withdraw(int);
int main()
{
	int money = 0, m;


	printf("* 현재 잔액은 0원 입니다.\n\n");

	while (1) {

		m = menu();

		if (m == 3)
			break;

		switch (m)
		{
		case 1:
			money=deposit(money);
			printf("* 현재 잔액은 %d원 입니다.\n\n",money);
			break;

		case 2:
			money=withdraw(money);
			printf("* 현재 잔액은 %d원 입니다.\n\n", money);
			break;
		}

	}
	return 0;
}
int deposit(int money) {
	int i, res;

	printf("# 입금액을 입력하세요 :");
	res = scanf("%d", &i);

	while (1) {

		if (res != 1)
		{
			myflush();
			i=inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}
		else if (i < 0) {
			myflush();
			i=inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}

		else
		{
			money += i;
			return money;
		}
	}
}
int inputInt(char * str) {
	int i,res;

	printf("%s", str);

	while (1) {

		res = scanf("%d", &i);

		if (res != 1)
		{
			myflush();
			printf("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}
		else
			return i;
	}
}
int withdraw(int money) {
	int res, i;

	printf("# 출금액을 입력하세요 :");
	res = scanf("%d", &i);

	while (1) {

		if (res != 1)
		{
			myflush();
			i = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}
		else if (i < 0) {
			myflush();
			i = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}

		else if (i > money) {
			myflush();
			printf("* 잔액이 부족합니다.\n");
			return money;

		}
		else
		{
			money -= i;
			return money;
		}
	}
}

int menu() {
	char m;

	while (1)
	{

		printf("# 메뉴를 선택하시오(i-입금,o-출금,q-종료) :");
		scanf(" %c", &m);

		if (m == 'i')
			return 1;
		else if (m == 'o')
			return 2;
		else if (m == 'q')
			return 3;
		else
			printf("* 잘못 입력하셨습니다.\n\n");
	}
}
void myflush() {
	while (getchar() != '\n');
}