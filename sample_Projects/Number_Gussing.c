//Here we are using random numbers to guess the number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 50;
    int answer = (rand() % (max - min + 1)) + min;
    
    printf("*** Number Gussing Game ***\n");

    do
    {
        printf("Guess a number between %d - %d:", min, max );
        scanf("%d",&guess);
        tries++;

        if (guess < answer)
        {
            printf("Too low!\n");
        }
        else if (guess > answer)
        {
            printf("Too High!\n");
        }
        else
        {
           printf("Correct!\n"); 
        }
        
        

    } while (guess != answer);

    printf("The answer is %d\n", answer);
    printf("It took you %d tries",tries);
    

    return 0;
} 