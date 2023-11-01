// n · (n – 1) · (n – 2) · ... · 1
// ++j
// j++
#include <stdio.h>

int factorial(int n){
    if(n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }

    return n * factorial(n-1);
}

// 3 * 2 * 1


int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("factorial(%d) = %d\n", n, result);
}