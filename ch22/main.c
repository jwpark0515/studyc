#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point A, B;
    double distance;

    fputs("point A: ", stdout);
    scanf("%d %d", &A.x, &A.y);

    fputs("point B: ", stdout);
    scanf("%d %d", &B.x, &B.y);
    
    distance = sqrt((double)((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)));

    printf("distance: %g \n", distance);
    return 0;
}