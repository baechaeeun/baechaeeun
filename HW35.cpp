#include<stdio.h>
void scanF();
int cal(int i, int p);
void printF(int h, int s, int f);
int main()
{
	scanF();

}
void scanF(){
	int n, m, k;

	printf("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용 :");
	scanf("%d", &n);
	printf("* 사용량을 입력하시오(ton단위) :");
	scanf("%d", &m);

	k = cal(n, m);

	printF(n, m, k);

	return;

}
int cal(int i, int p) {
	int use, euse;

	switch (i) {
	case 1:
		use = p * 50;
		euse = use*1.05;
		break;

	case 2:
		use = p * 45;
		euse = use*1.05;
		break;

	case 3:
		use = p * 30;
		euse = use*1.05;
		break;

	default:
		;
		break;
	}

	return euse;
}
void printF(int h, int s, int f) {
	switch (h) {
	case 1:
		printf("# 사용자코드 : 1(가정용)\n");
		break;
	case 2:
		printf("# 사용자코드 : 2(상업용)\n");
		break;
	case 3:
		printf("# 사용자코드 : 3(공업용)\n");
		break;
	default:
		;
		break;
	}

		printf("# 사용량 : %d ton\n", s);
		printf("# 총수도요금 : %d원", f);

		return;
	}


