// 

#include <stdio.h>


int f(int x) {
    return x*x + 2*x + 1;
}


int main() {
    int x; 
    printf("Enter x: ");
    scanf("%d", &x);

    int result = f(x);
    printf("f(%d) = %d\n", x, result);
}