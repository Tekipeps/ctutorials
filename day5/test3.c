#include <stdio.h>

int abc(int i)
{
    return i--;
}

void main(void)
{
    int i;
    i = abc(10);
    printf("%d", --i);
}