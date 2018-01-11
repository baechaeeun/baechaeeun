int main()
{
	double reDay = 365.2422;
	double stDay = reDay;
	int day, hour, minute;
	double second;

	day = stDay / 1;
	stDay -= day;

	stDay *= 24;
	hour = stDay / 1;
	stDay -= hour;

	stDay *= 60;
	minute = stDay / 1;
	stDay -= minute;

	second = stDay * 60;

	printf("%.4f일은 %d일 %d시간 %d분 %.2lf초입니다.\n", reDay, day, hour, minute, second);
	return 0;
}