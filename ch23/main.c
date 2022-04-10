#include <stdio.h>

/*
typedef struct
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point* pos1, Point* pos2){
    Point temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};
    printf("pos1: (%d, %d) \n", pos1.xpos, pos1.ypos);
    printf("pos2: (%d, %d) \n", pos2.xpos, pos2.ypos);
    SwapPoint(&pos1, &pos2);
    puts("----- after swap ------");
    printf("pos1: (%d, %d) \n", pos1.xpos, pos1.ypos);
    printf("pos2: (%d, %d) \n", pos2.xpos, pos2.ypos);
    
    return 0;
}
*/
typedef struct 
{
    int xp;
    int yp;
} Point;

typedef struct
{
    Point lu;
    Point rd;
} Rect;

int space(Rect r)
{
    return (r.rd.xp - r.lu.xp) * (r.rd.yp - r.lu.yp);
}

int main(void)
{
    Rect a;
    printf("좌상단을 입력하세요: ");
    scanf("%d %d", &(a.lu.xp), &(a.lu.yp));
    printf("우하단을 입력하세요: ");
    scanf("%d %d", &(a.rd.xp), &(a.rd.yp));
    printf("\n직사각형의 넓이는 %d 입니다", space(a));
    return 0;
}

