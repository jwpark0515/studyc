#include <stdio.h>

int main(void)
{
    int a = 0;
    int h, m, s;
    printf("초 입력: ");
    scanf("%d", &a);
    h = (int)(a / 3600);
    if(h>0) m = (int)((a - 3600*h) / 60);
    else m = (int)(a / 60);
    s = a % 60;
    
    printf("h:%d m:%d s:%d \n", h ,m, s);
}