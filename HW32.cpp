#include<stdio.h>
void myflush();
int menu();
int inputInt(char *);
int deposit(int);
int withdraw(int);
int main()
{
	int money = 0, m;


	printf("* ���� �ܾ��� 0�� �Դϴ�.\n\n");

	while (1) {

		m = menu();

		if (m == 3)
			break;

		switch (m)
		{
		case 1:
			money=deposit(money);
			printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n",money);
			break;

		case 2:
			money=withdraw(money);
			printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", money);
			break;
		}

	}
	return 0;
}
int deposit(int money) {
	int i, res;

	printf("# �Աݾ��� �Է��ϼ��� :");
	res = scanf("%d", &i);

	while (1) {

		if (res != 1)
		{
			myflush();
			i=inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
		}
		else if (i < 0) {
			myflush();
			i=inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
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
			printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
		}
		else
			return i;
	}
}
int withdraw(int money) {
	int res, i;

	printf("# ��ݾ��� �Է��ϼ��� :");
	res = scanf("%d", &i);

	while (1) {

		if (res != 1)
		{
			myflush();
			i = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
		}
		else if (i < 0) {
			myflush();
			i = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
		}

		else if (i > money) {
			myflush();
			printf("* �ܾ��� �����մϴ�.\n");
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

		printf("# �޴��� �����Ͻÿ�(i-�Ա�,o-���,q-����) :");
		scanf(" %c", &m);

		if (m == 'i')
			return 1;
		else if (m == 'o')
			return 2;
		else if (m == 'q')
			return 3;
		else
			printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
	}
}
void myflush() {
	while (getchar() != '\n');
}