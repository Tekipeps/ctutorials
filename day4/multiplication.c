#include <stdio.h>

#define MAX 10

void main() {
    int table[MAX][MAX] = {0};
    int row, col;

    for (row = 0; row <= MAX - 1; row++) {
        for (col = 0; col<= MAX - 1; col++) {
            table[row][col] = row * col;
        }
    }

    for (row = 1; row <= MAX - 1; row++) {
        for (col = 1; col<= MAX - 1; col++) {
            printf("%d\t", table[row][col]);
        }
        printf("\n");
    }
}