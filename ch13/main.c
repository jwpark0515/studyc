#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    int arrlen = sizeof(arr) / sizeof(int);
    for(int i = 0; i < arrlen; i++) {
        printf("%d \n", arr[i]);
    }
    // for(int i = 0; i < arrlen; i++) {
    //     *(ptr++) += 2;
    // }
    int idx = 0;
    while(idx < arrlen) {
        *(ptr++) += 2;
        idx++;
    }
    for(int i = 0; i < arrlen; i++) {
        printf("%d \n", arr[i]);
    }
    return 0;
}