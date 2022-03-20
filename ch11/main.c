#include <stdio.h>

int main(void)
{
    // int num = 5;
    // int a[num];
    // int sum = 0;
    // printf("5개의 수를 입력하시오: ");
    // for(int i = 0; i < num; i++) scanf("%d", &a[i]);
    // //int s = sizeof(a) / sizeof(int);
    // for(int i = 0; i < num; i++){
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    // int max = a[0]; 
    // int min = a[0];
    // for(int i = 0; i < num; i++){
    //     sum += a[i];
    //     if(max < a[i]) max = a[i];
    //     if(min > a[i]) min = a[i];
    // }
    // printf("sum:%d max:%d min:%d \n", sum, max, min);
    
    char str[50] = "I like C programing";
    printf("string: %s \n", str);

    int idx = 0;
    while(str[idx] != '\0')
    {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");
    for(int i = 0; i < 50; i++) {
        printf("%d", str[i]);
    }
    printf("\n");
    return 0;
}