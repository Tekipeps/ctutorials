#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x = 0;

    while (x < 5)
    {

        printf("x is %d\n", x);

        x++;
    }

    
    for(int x = 0; x < 5; x++)
    {
        printf("x is %d\n", x);
    }

    char color[] = "blue";

    for(int x = 0; color[x] != '\0'; x++)
    {
        printf("color[%d] is %c\n", x, color[x]);
    }
}