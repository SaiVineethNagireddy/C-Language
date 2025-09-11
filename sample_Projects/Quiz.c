#include<stdio.h>
#include<ctype.h>
int main()
{
    char Questions[][100] = {"What is the capital of India?",
                              "Who is known as the 'Father of the Nation' in India?",
                              "Which planet is known as the 'Red Planet'?",
                              "The largest ocean in the world is:"};

    char Options[][100]={"a) Mumbai\nb) New Delhi\nc) Kolkata\nd) Chennai",
                         "a) Jawaharlal Nehru\nb) Mahatma Gandhi\nc) Sardar Vallabhbhai Patel\nd) B. R. Ambedkar",
                         "a) Venus\nb) Mars\nc) Jupiter\nd) Saturn",
                         "a) Atlantic Ocean\nb) Indian Ocean\nc) Arctic Ocean\nd) Pacific Ocean"};  
                    
    char Answers[]={'B','B','B','D'};

    char guess = '\0';
    int score = 0;
    int questionCount = sizeof(Questions)/sizeof(Questions[0]);
    int option = sizeof(Options)/sizeof(Options[0]);

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s\n",Questions[i]);
        printf("%s\n",Options[i]);  
        printf("\nEnter the your option:");
        scanf(" %c",&guess); 
        guess = toupper(guess);//THis helps to convert the lowercase input option to uppercase it is present in ctype.h
        if (guess == Answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("Your score out of %d is %d",score, questionCount);
    return 0;
}