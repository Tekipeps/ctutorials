#include <stdio.h>

void f(int a[])
{
    int i;
    for (i = 0; i < 3; i++)
        a[i]++;
}

void main()
{
    int i, a[] = {10, 20, 30};
    f(a);
    for (i = 0; i < 3; ++i)
    {
        printf("%d ", a[i]);
    }
}