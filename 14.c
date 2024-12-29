// Write a program (WAP) that will find nCr where n >= r; n and r are integers.

#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = num; i > 1; i--) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r, nCr;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("%d", nCr);

    return 0;
}
