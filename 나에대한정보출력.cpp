// 작성자 : 배채은
#include<stdio.h>
void printAge(int n);
void printHeight(double m);

int main()
{
         char name[20] = "홍길동";
		 int age = 500;
         double height = 170.8;

         printf("성명 : %s\n", name);
         printAge(age);
         printHeight(height);

         return 0;
 }
 void printAge(int n)
 {
         printf("나이 : %d\n", n);

		 return;
 }

 void printHeight(double m)
 {
	 printf("키 : %lf\n", m);

         return;
 }


