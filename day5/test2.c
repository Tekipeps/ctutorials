#include <stdio.h>

void foo()
{
    printf("2 ");
}

void f()
{
    printf("1 ");
    foo();
}

void main()
{
    f();
}