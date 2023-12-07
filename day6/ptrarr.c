#include <stdio.h>

void main()
{
    int i, arr[5];
    int *ptr;
    ptr = &arr[0]; // assign address of arr

    printf("\nEnter 5 integers into array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]); // read elements using pointer variable
    }
    printf("\nElements of array in reverse order are :");
    for (i = 4; i >= 0; i--) { // loop to print in reverse order
        printf("\nElement[%d] is %d ", i, *(ptr + i));
    }
    // print elements using pointer variable
}