#include<stdio.h>
void printFF();
double scanFF();
int main()
{
	int basic = 660;
         double kwbasic = 88.5, kw, entire, final, duty;

         kw = scanFF();

         entire = (double)basic + (kw*kwbasic);
         duty = entire*0.09;
         final = entire + duty;

         printFF(final);

         return 0;
 }
 double scanFF() {
         double kw0;
         printf("���� ��뷮�� �Է��ϼ���(kw) : ");
         scanf("%lf", &kw0);
         return kw0;

}

  void printFF(double n) {
         printf("���� ������� %lf �� �Դϴ�.", n);
         return;

}



