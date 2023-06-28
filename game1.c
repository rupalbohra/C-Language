// this project is done after chapter 4.

// in this project we'll also learn how to create a random number.


# include<stdio.h>
# include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //generates a random number between 1 to 100
    // printf("The number is %d", number);

    //keep running the loop until the number is guessed.

    do{
        printf("Guess the number between 1 to 100: \n");
        scanf("%d", &guess);
        
        if(number<guess){
            printf("Lower number please! \n");
        }

        else if(number>guess){
            printf("Higher number please! \n");
        }
        else{
            printf("You guessed it in %d attempts", nguesses);
            break;
        }
        nguesses++ ;
    }while(guess != number);
    
return 0;
}