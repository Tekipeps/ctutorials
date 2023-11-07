/*
    2) Using array to summarize survey results
40 Students were asked to rate the quality of the food in the student cafeteria on a scale of 1
to 10 (1 means bad and 10 means excellent). Place the 40 responses in an integer array and
summarize the results of the survey.

 Summarize the number of responses of each type (1 through 10)

 The array responses is a 40-element array of students’ responses.

 The array frequency is a 11-element array to count the number of occurrences of
each response.
responses array elements are = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5,
7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10}
*/

#include <stdio.h>

#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

int main()
{
    int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5,
                         7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    
    int frequency[FREQUENCY_SIZE] = {0};

    // 1  - 2
    // 2  -  1
    // 3
    // 4 - 1
    // 5  - 1 
    // 6  - 1
    // 7  - 1
    // 8  - 2
    // 9  - 1
    // 10  - 1

    for(int i = 0; i<RESPONSE_SIZE; i++) {
        int response = responses[i];
        
        frequency[response]++;
    }

    printf("%s%17s\n", "Response", "Frequency");

    for(int i = 1; i<FREQUENCY_SIZE; i++) {
        printf("%4d%17d\n", i, frequency[i]);
    }
}