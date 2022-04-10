#include <stdio.h>
#include <stdlib.h>

char* ReadUserName(void)
{
    char* name = (char*)malloc(sizeof(char)*30);
    printf("What's your name? ");
    gets(name);
    return name;
}

int main(void)
{
    char* n1;
    char* n2;
    n1 = ReadUserName();
    printf("n1: %s \n", n1);
    n2 = ReadUserName();
    printf("n2: %s \n", n2);

    printf("again n1: %s \n", n1);
    printf("again n2: %s \n", n2);
    free(n1);
    free(n2);
    return 0;
}