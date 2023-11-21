Tutorial Questions

# Question 1:
Write a C function findMax that takes an array of integers and its size as parameters and returns the maximum value in the array.

# Question 2:
Complete the C program to reverse the elements of the given array:


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // TODO: Complete the loop to reverse the array elements

    printf("Reversed Array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}

# Question 3:
Write a C function that models the following mathematical function.
For example, f(-3.2) returns -3.2 + 2 = -1.2. Assume that x is a float type variable.

scss

        { x + 2, x ≤ -1
f(x) =  { x^2, -1 ≤ x ≤ 1
        { -x + 2, x > 1
