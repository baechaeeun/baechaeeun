#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int);
int scanF();
int prinTF(int o);
int main()
{
	int num, i, n;
	srand((unsigned int)time(NULL));
	n = scanF();
	prinTF(n);

}
int scanF() {
	int n;
	printf("# 숫자를 입력하시오 :");
	scanf("%d", &n);
	return n;
}
int prinTF(int o) {
	int num = random(101);
	int m = scanF();
	while (num!=m) {
		if (0 < num < m)
		{printf("0 보다는 크고 %d 보다는 작습니다.", m);
		

		else
		{printf("%d 보다는 크고 101보다는 작습니다.", m);
	}
}
int random(int n) {
	int res;
	res = rand() % n;
	return res;
}