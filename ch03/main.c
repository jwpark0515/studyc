#include <stdio.h>

/*int main(void)
{
    int num1 = 10;
    int num2 = (num1--) + 2;
    printf("%d\n", num1);
    int num3 = --num1;
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    return 0;
}*/


int main(void)
{
    int result;
    int num1;
    int num2;

    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    
    result=num1+num2;
    printf("%d + %d = %d \n", num1, num2, result);
    return 0;
}