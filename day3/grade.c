// Write a program that takes in the scores of a student on 5 courses and prints the letter grade for each course and also the average score.
// Input: 90 80 70 60 50
// Output: A B C D F
// Average: 70

#include <stdio.h>

#define SIZE 5

int main() {
    int scores[SIZE];
    int i = 0;
    int sum = 0;
    float average = 0.0;

    printf("Enter 5 scores: ");
    for (i = 0; i < SIZE; i++){
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < SIZE; i++){
        if (scores[i] >= 90){
            printf("A ");
        } else if (scores[i] >= 80){
            printf("B ");
        } else if (scores[i] >= 70){
            printf("C ");
        } else if (scores[i] >= 60){
            printf("D ");
        } else {
            printf("F ");
        }
    }
    printf("\n");

    for (i = 0; i < SIZE; i++){
        sum += scores[i];
    }

    average = (float)sum / SIZE;

    printf("Average: %.2f\n", average);
}