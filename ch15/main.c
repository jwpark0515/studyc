#include <stdio.h>

int bubbleSort(int size, int x[]){
    int cnt = 0;
    int tmp = 0;
    int tcnt = 0;

    while(1){
        cnt = 0;
        for(int i = 0; i < size - 1; i++){
            if(x[i] < x[i+1]){
                cnt++; tcnt++;
                tmp = x[i];
                x[i] = x[i+1];
                x[i+1] = tmp;
            }
        }
        if(cnt == 0) break;
    }
    return tcnt;
}
int main(void)
{
    int a[5] = {5, 2, 3, 1, 4};
    int size = sizeof(a) / sizeof(int);

    int totalCount = bubbleSort(size, a);
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("%d \n", totalCount);
}

