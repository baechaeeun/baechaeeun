// �ۼ��� : ��ä��
#include<stdio.h>
void printAge(int n);
void printHeight(double m);

int main()
{
         char name[20] = "ȫ�浿";
		 int age = 500;
         double height = 170.8;

         printf("���� : %s\n", name);
         printAge(age);
         printHeight(height);

         return 0;
 }
 void printAge(int n)
 {
         printf("���� : %d\n", n);

		 return;
 }

 void printHeight(double m)
 {
	 printf("Ű : %lf\n", m);

         return;
 }


