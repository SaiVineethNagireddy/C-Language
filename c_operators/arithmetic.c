#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the a value: ");
    scanf("%d", &a);
    
    printf("Enter the b value: ");
    scanf("%d", &b);

    printf("The result of (a + b) is: %d\n", a + b);
    printf("The result of (a - b) is: %d\n", a - b);
    printf("The result of (a * b) is: %d\n", a * b);
    return 0;
}