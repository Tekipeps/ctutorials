#include <stdio.h>

int isupper( int c );

int main() {
    char letter = 70;
    char null_byte = '\0';



    printf("Letter is %c and is represented by %d\n", letter, letter);

    if(isupper(letter)) {
        printf("Letter %c is uppercase\n", letter);
    } else {
        printf("Letter %c is lowercase\n", letter);
    }
}

int isupper( int c ) {
    if (c >= 65 && c <= 90) {
        return 1;
    } else {
        return 0;
    }
}