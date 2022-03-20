#include <stdio.h>
#include <stdlib.h>

int Abso(int, int);
int factorial(int);

int main(void)
{
    // int n1, n2;
    // printf("두 개의 정수 입력: ");
    // scanf("%d %d", &n1, &n2);
    // printf("%d와 %d중에 절댓값이 큰 정수: %d \n", n1, n2, Abso(n1, n2));
    
    printf("%d \n", factorial(5));
    return 0;
}

int Abso(int n1, int n2)
{
    if(abs(n1) > abs(n2)) return n1;
    else return n2;
}

int factorial(int i)
{
    if(i == 0) return 1;
    else return i * factorial(i-1);
}