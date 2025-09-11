//Rock Paper Scissor
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userhoice, int computerChoice);

int main()
{
    srand(time(NULL));

    printf("*** Rock Paper Scissors ***\n");

    int userhoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userhoice)
    {
    case 1:
        printf("You chose Rock!\n");
        break;
    case 2:
        printf("You chose Paper!\n");
        break;
    case 3:
        printf("You chose Scissor!\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer chose Rock!\n");
        break;
    case 2:
        printf("Computer chose Paper!\n");
        break;
    case 3:
        printf("Computer chose Scissor!\n");
        break;
    }
    checkWinner(userhoice, computerChoice);

    return 0;
}

int getComputerChoice()
{
    return (rand() % 3) + 1;
}
int getUserChoice()
{
    int choice = 0;
    do
    {
        printf("Choose an option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
    } while (choice < 1 || choice > 3);
    

    return choice;
}
void checkWinner(int userhoice, int computerChoice)
{
    if (userhoice == computerChoice)
    {
       printf("It's a TIE!");
    }
    else if ((userhoice == 1 && computerChoice == 3) ||
             (userhoice == 2 && computerChoice == 1) ||
             (userhoice == 3 && computerChoice == 2))
    {
        printf("You Win!");
    }
    else{
        printf("You Lose!");
    }

}