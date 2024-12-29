// Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.

#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Enter the values of x and y: ");
    scanf("%d %d", &x, &y);

    printf("%d", (int)pow(x, y));

    return 0;
}
