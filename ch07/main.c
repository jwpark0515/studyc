#include <stdio.h>

int main(void)
{
    int n = 1, abs = 0;
    while(n!=0){
        printf("정수 입력: ");
        scanf("%d", &n);
        abs = (n>0) ? n : (-1) * n;
        printf("%d\n", abs);

    }
    
    return 0;
}
