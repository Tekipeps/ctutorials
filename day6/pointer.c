#include <stdio.h>

int main() {
    int *countPtr, count;

    count = 10;
    countPtr = &count;

    printf("count = %d, &count = %p, countPtr = %p, *countPtr = %d\n", count, &count, countPtr, *countPtr);
}