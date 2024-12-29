// Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at the keyboard. 

#include <stdio.h>

int main(){
    char x;
    for (int i = 1;1; i++)
    {
        scanf(" %c", &x);
        if (x == 'A') break;
        else printf("Input %d: %c\n", i, x);
    }
    
    return 0;
}