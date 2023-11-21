// Write a program in C to read n number of values in an array and display it in reverse order.
// Test Data :
// Input the number of elements to store in the array :3
// Input 3 number of elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7
// Expected Output :
// The values store into the array are :
// 2 5 7
// The values store into the array in reverse are :
// 7 5 2

#include <stdio.h>

int main() {
    // Get the number of elements in the array
    printf("Input the number of elements to store in the array: ");

    // Declare a variable to store the number of elements
    int num_elements;

    // Read the number of elements from the user
    scanf("%d", &num_elements);

    // Declare an array of size num_elements
    int arr[num_elements];

    // Read the elements from the user
    for (int i = 0; i < num_elements; ++i) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Declare an array to store the reverse of the elements
    int reverse[num_elements];

    // Store the reverse of the elements in the array
    for (int i = 0; i < num_elements; ++i) {
        reverse[i] = arr[num_elements - i - 1];
    }

    // Print the elements of the array
    printf("The values store into the array are: ");
    for (int i = 0; i < num_elements; ++i) {
        printf("%d ", arr[i]);
    }

    // Print the reverse of the elements of the array
    printf("\nThe values store into the array in reverse are: ");
    for(int i = 0; i < num_elements; ++i) {
        printf("%d ", reverse[i]);
    }

    // Print a new line
    puts(""); // printf("\n");
}