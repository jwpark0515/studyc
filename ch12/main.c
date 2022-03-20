#include <stdio.h>

int main(void)
{
    int num = 7;
    int* pnum = &num;
    printf("%d %p %d \n", num, pnum, (*pnum));
    *pnum = 8;
    printf("%d %p %d \n", num, pnum, (*pnum));
    return 0;
}