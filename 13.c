// Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.

#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = n;
    printf("%d! = ", n);
    while (i>0)
    {
        printf("%d", i);
        if (i>1) printf(" x ");
        fact = fact * n;
        i--;
    }
    printf(" = %d\n", fact);
    
    return 0;
}
