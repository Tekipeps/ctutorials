// Complete the C program to reverse the elements of the given array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 19, 3, 65, 12, 65, 34, 67, 90};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    // printf("%zu - %zu\n", sizeof(arr), sizeof(arr[0]));

    // TODO: Complete the loop to reverse the array elements
    
    // int reversed[n];

    printf("Reversed Array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[n - i - 1]);
    }

    // for (int i = 0; i < n; ++i) {
    //     printf("%d ", reversed[i]);
    // }

    puts("");
    return 0;
}
