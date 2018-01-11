int input();
int cal(int);
void output(int);
int main()
{
	int station, money, i = 0;
	while (i < 5)
	{
		station = input();
		money = cal(station);
		output(money);
		i++;
	}
	return 0;
}
int input()
{
	int station;
	printf("역수를 입력하시오 : ");
	scanf("%d", &station);
	return station;
}
int cal(int st)
{
	int mon;
	if (st <= 5)
		mon = 600;

	else if (st <= 10)
		mon = 800;

	else if (st > 10)
	{
		if (st % 2 == 1)
			st += 1;

		mon = 800 + ((st / 2 - 5) * 100);
	}
	return mon;
}
void output(int money)
{
	printf("요금 : %d원\n", money);
}