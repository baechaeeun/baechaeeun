#include<stdio.h>
int scanF();
void prinTF(int l,int p);
int cal(int m);
int main()
{
	int d,n;
	d = scanF();
	n=cal(d);
	prinTF(d,n);


}
int scanF() {
	int deep;
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) :");
	scanf("%d", &deep);
	return deep;
}
void prinTF(int l,int p) {

	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.", (double)l, p);
	return;
	
}
int cal(int m) {
	int i=0, length=0;

	while (1) {
		
		if (length >= m)
			break;
		length += 50;
		i++;
		if (length >= m)
			break;
		length -= 20;
	}

	return i;
}



	
