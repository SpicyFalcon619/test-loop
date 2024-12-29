// Write a program (WAP) that will take N numbers as inputs and compute their average. 
// (Restriction: Without using any array)

#include <stdio.h>

int main(){
    int n;
    float avg, num, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("Average: %f", avg);
    
    return 0;
}