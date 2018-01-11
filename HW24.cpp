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
	printf("우물의 깊이를 입력하시오(cm단위) :");
	scanf("%d", &deep);
	return deep;
}
void prinTF(int l,int p) {

	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.", (double)l, p);
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



	
