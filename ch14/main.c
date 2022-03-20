#include <stdio.h>

/*
void ShowArayElem(int* param, int len)
{
    for(int i = 0; i < len; i++)
        printf("%d ", *(param + i));
    printf("\n");
}

void AddArayElem(int* param, int len, int add)
{
    for(int i = 0; i < len; i++) param[i] += add;
}

int main(void)
{
    int arr[3] = {1, 2, 3};
    printf("%lu %lu \n", sizeof(arr), sizeof(int));
    ShowArayElem(arr, sizeof(arr) / sizeof(int));
    AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
    ShowArayElem(arr, sizeof(arr) / sizeof(int));
    
    return 0;
}
*/
void Swap(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    printf("num1 num2: %d %d \n", num1, num2);

    Swap(&num1, &num2);
    printf("num1 num2: %d %d \n", num1, num2);
    return 0;
}