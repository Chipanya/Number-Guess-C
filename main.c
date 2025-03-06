#include <stdio.h>
#include <stdlib.h>

int main(){
    int max = 10;
    int min = 1; 
    int counter = 0;
    int randNum = rand() % (max - min + 1) + min;

    int tries = 3;

    for(int i = tries; i > 0; --i){
        printf("Enter a number between 1 and 10: \n");
        int c;
        scanf("%d", &c);
        ++counter;

        if(c == randNum){
            printf("You guessed it in %d tries\n", counter);
            break;
        }else{
            if(c > randNum){
                printf("Your guess is greater, you have %d tries left\n", i);
            }else{
                printf("Your guess is lower, you have %d left\n", i);
            }
        }


    }

    printf("Thanks for playing!\n");
}