// Write a program (WAP) that will print Fibonacci series upto Nth terms.
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (i<n) printf(", "); // this condition is to not print comma after the last term.
    }
    
    return 0;
}
