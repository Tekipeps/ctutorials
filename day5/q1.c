// Write a C function findMax that takes an array of integers and its size as parameters
// and returns the maximum value in the array.

#include <stdio.h>
#define SIZE 8

int findMax(int arr[], int size);

int main()
{
    int arr[SIZE] = {5, 4, 7, 2, 1, 9, 3, 6};

    // Find the maximum value in the array
    int max = findMax(arr, SIZE);
    
    printf("\n%d\n", max);
}

int findMax(int arr[], int size)
{
    // Assume that the first element is the maximum
    int max = arr[0];

    // Loop through the array to find the maximum value
    for (int i = 1; i < size; i++)
    {
        // If the current element is greater than the maximum value
        if (arr[i] > max)
        {
            // Update the maximum value
            max = arr[i];
        }
    }

    // Return the maximum value
    return max;
}
