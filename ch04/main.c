#include <stdio.h>

int main(void)
{
   double a, b;

   printf("두 실수 입력:");
   scanf("%lf %lf", &a, &b);

   printf("%lf \n", a + b);
   printf("%lf \n", a - b);
   printf("%lf \n", a * b);
   printf("%lf \n", a / b);
    return 0;
}