//
// Created by My-pc on 2023/10/17.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int high = 100 ;
    int chance = 7 ;
    /*
     * print the rule of the game
     */
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chance.\n",
           high,chance);
    /*
     * generate a random number
     */
    srand(time(NULL));//use current time as seed for random number generation
    //0 .. RAND_MAX
    //1 .. high
    int secret = rand()%high + 1;
    printf("The computer generated a random number is %d\n", secret);
    while (chance > 0){
        /*
        *  let the player enter his/her guess number
        */
        printf("Enter your guess.\n");

        /*
         * store the guess number,
         * compare it with the secret,
         * and inform the player of the result
         */
        int guess;
        scanf("%d",&guess);

        /*
         * loop: repeat until the player win or lose
         */

        if(guess == secret){
            printf("You win!\n");
            break;
        }else if(guess > secret){
            printf("guess > secret\n");
        }else {
            printf("guess < secret\n");
        }
        //chance = chance - 1;
        chance --;
    }

    return 0;
}