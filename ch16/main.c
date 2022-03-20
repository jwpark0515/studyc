#include <stdio.h>

int a[5][5] = {};
int get(void);
int show(void);

int main(void){
    get();
    show();
    return 0;
}

int get(void){
    int sum = 0;
    for(int i=0; i<4; i++){
        printf("%d 번째 학생의 성적을 입력하세요: \n", i + 1);
        scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
        a[i][4] = a[i][0] + a[i][1] + a[i][2] + a[i][3];
    }

    for(int j=0; j<5; j++){
        sum = 0;
        for(int i=0; i<4; i++){
            sum += a[i][j];
        }
        a[4][j] = sum;
    }
    return 0;
}

int show(void){
    for(int i=0; i<5; i++){
        printf("%d번학생: ", i+1);
        for(int j=0; j<5; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}