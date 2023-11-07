/**
 * ) Write a program that simulates coin tossing. For each toss of the coin the
program should print Heads or Tails. Let the program toss the coin 20 times, and
count the number of times each side of the coin appears. Print the results. (0 for
tails and 1 for heads) (hint: lab3 task3)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOSS_COUNT 20

int main()
{
    int tosses[TOSS_COUNT] = {0};
    int frequency[2] = {0};

    srand(time(NULL));

    for (int i = 0; i < TOSS_COUNT; i++)
    {
        int toss = rand() % 2;
        tosses[i] = toss;
        frequency[toss]++;

        if (toss == 0)
        {
            printf("Tails ");
        }
        else
        {
            printf("Heads ");
        }
    }

    printf("\n\nThe total number of heads was %d\n", frequency[1]);
    printf("The total number of tails was %d\n", frequency[0]);
}