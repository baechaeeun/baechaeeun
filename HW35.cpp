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

	printf("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������ :");
	scanf("%d", &n);
	printf("* ��뷮�� �Է��Ͻÿ�(ton����) :");
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
		printf("# ������ڵ� : 1(������)\n");
		break;
	case 2:
		printf("# ������ڵ� : 2(�����)\n");
		break;
	case 3:
		printf("# ������ڵ� : 3(������)\n");
		break;
	default:
		;
		break;
	}

		printf("# ��뷮 : %d ton\n", s);
		printf("# �Ѽ������ : %d��", f);

		return;
	}


