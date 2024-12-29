// Write a program (WAP) that will print following series upto Nth terms.
// 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….

#include <stdio.h>

int main(){
    int n, term = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", term);
        if (i<n) printf(", "); // this condition is to not print comma after the last term.
        term += 2;
    }
    
    return 0;
}