#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    int guesses = 0;
    srand(time(0));
    int randomNum = (rand() % 100) + 1;
    do
    {
        printf("\nGuess the Number from 1 to 100: ");
        scanf("%d", &num);
        if (num>randomNum){
            printf("Down to Lower Number.");
        }else if(num==randomNum){
            printf("------------------------------------\nHurray!");
        }else{
            printf("Go to Higher Number.");
        }
        guesses++;

    } while (randomNum!=num);
    
    printf("\nYou Matched the number in %d guesses.\n------------------------------------", guesses);

    return 0;
}