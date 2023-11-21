// Write a C function that models the following mathematical function.
// For example, f(-3.2) returns -3.2 + 2 = -1.2. Assume that x is a float type variable.

// scss

//         { x + 2, x < -1
// f(x) =  { x^2, -1 ≤ x ≤ 1
//         { -x + 2, x > 1

#include <stdio.h>

float f(float x);

int main()
{
    printf("%f\n", f(-3.2));
    printf("%f\n", f(0));
    printf("%f\n", f(1.2));
}

// Function definition
float f(float x)
{
    // Check the value of x
    if (x < -1)
    {
        return x + 2;
    }
    else if (x >= -1 && x <= 1)
    {
        return x * x;
    }
    else
    {
        return -x + 2;
    }
}