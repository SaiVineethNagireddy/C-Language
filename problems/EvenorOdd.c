#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number to check if it is Even or odd:");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("%d is Even number", num);
    }
    else
    {
        printf("%d is Odd number", num);
    }
    
    return 0;
}