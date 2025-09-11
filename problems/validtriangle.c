#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("It is a valid triangle");
    }
    else
    {
        printf("It is not a valid triangle");
    }
   
    return 0;
}