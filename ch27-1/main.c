#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main(void)
{
    printf("삼각형 넓이: %g \n", TriangleArea(4, 2));
    printf("원 넓이: %g \n", CircleArea(3));

    printf("직사각형 둘레: %g \n", RectangleRound(2.5, 5.2));
    printf("정사각형 둘레: %g \n", SquareRound(3));
    return 0;
}