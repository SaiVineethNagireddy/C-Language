#include <stdio.h>

int largest(int a, int b);

int main() 
{
    int num1, num2;
    printf("Enter a value: ");
    scanf("%d", &num1);
    printf("Enter b value: ");
    scanf("%d", &num2);

    printf("Largest number is: %d\n", largest(num1, num2));

    return 0;
}

int largest(int a, int b) {
    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
    else
    {
        return a;
    }
    
}