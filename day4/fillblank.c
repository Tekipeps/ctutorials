#include <stdio.h>
#include "stdlib.h"
#include "time.h"
// #include "conio.h"
#define SIZE 7

void main()
{
    int face;                  /* random die value 1 - 6 */
    int roll;                  /* roll counter */
    int frequency[SIZE] = {0}; /* clear counts */
    srand(time(NULL));         /* seed random-number generator */
    
    // roll a die 10 times
    for (roll = 1; roll <= 10; roll++)
    {
        face = 1 + (rand() % 6); // get a random value between 1 and 6
        frequency[face]++;      // increases the appropriate frequency counter // depending on the value of face
    }

    printf("%s%17s\n", "Face", "Frequency");

    /* output frequency elements 1-6 in tabular format */
    for (face = 1; face < SIZE; face++)
    {
        printf("%4d%17d\n", face, frequency[face]);
    }
}