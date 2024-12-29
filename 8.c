// Write a program (WAP) that will reverse the digits of an input integer.

#include <stdio.h>

int main(){
    int n, ld = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for ( ;n!=0; )
    {
        ld = n % 10;
        printf("%d", ld);
        n = n / 10;
    }
    
    return 0;
}