// Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.

#include <stdio.h>
#include <math.h>

int main() {
    int x, y, result = 1;
    printf("Enter the values of x and y: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y ; i++)
    {
        result = result * x;
    }

    printf("%d to the power %d is %d\n", x, y, result);

    return 0;
}
