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
	printf("# ���ڸ� �Է��Ͻÿ� :");
	scanf("%d", &n);
	return n;
}
int prinTF(int o) {
	int num = random(101);
	int m = scanF();
	while (num!=m) {
		if (0 < num < m)
		{printf("0 ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.", m);
		

		else
		{printf("%d ���ٴ� ũ�� 101���ٴ� �۽��ϴ�.", m);
	}
}
int random(int n) {
	int res;
	res = rand() % n;
	return res;
}