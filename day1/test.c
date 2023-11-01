#include <stdio.h>

int main()
{
    int y = 9;
    int x = 2;
    int a = 3;

    y = a * x * x * x + 7;
    printf("a) y = %d\n", y);
    y = a * x * x * (x + 7);
    printf("b) y = %d\n", y);
    y = (a * x) * x * (x + 7);
    printf("c) y = %d\n", y);
    y = (a * x) * x * x + 7;
    printf("d) y = %d\n", y);
    y = a * (x * x * x) + 7;
    printf("e) y = %d\n", y);
    y = a * x * (x * x + 7);
    printf("f) y = %d\n", y);
}