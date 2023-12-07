#include <stdio.h>

void main()
{
    int *pc;
    int c = 22;

    pc = &c;

    printf("Address of pointer pc:%p\n", pc);
    printf("Content of pointer pc:%d\n\n", *pc);
    
    c = 11;
    
    printf("Address of pointer pc:%p\n", pc);
    printf("Content of pointer pc:%d\n\n", *pc);
    
    *pc = 2;
    
    printf("Value of c:%d\n\n", c);
}