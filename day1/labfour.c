/*
    Write a program that searches an array for  a "key value" and returns the array index for that element,
    if the element is not found, print a message "Not found". The program should print the array and show 
    the index of the search result.
*/

#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE];
    int key;
    int i = 0;
    int found = 0;
    int index = 0;

    puts("Enter 10 integers:");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    puts("Enter the key to search for:");
    scanf("%d", &key);


    for (i = 0; i < SIZE; i++) {
        if (array[i] == key) {
            found = 1;
            index = i;
        }
    }

    if (found == 1) {
        printf("Found KEY %d at index %d\n", key, index);
    } else {
        printf("Not found\n");
    }
}