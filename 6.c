// Write a program (WAP) for the described scenario: 
// Player-1 picks a number X and Player-2 has to guess that number within N tries. For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at any time successfully guesses the number, the program prints “Right, Player-2 wins!” and terminates right away. Otherwise after the completion of N wrong tries, the program prints “Player-1 wins!” and halts.

// (Hint: Use break/continue)

#include <stdio.h>

int main(){
    int n, x, y;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int tries = n, success = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &y);
        if (x == y){
            printf("Right, Player-2 wins!");
            success = 1;
            break;
        }
        else{
            tries--;
            printf("Wrong, %d Choice(s) Left!\n", tries);
        }
    }
    if(success == 0) printf("Player-1 wins!");
    return 0;
}