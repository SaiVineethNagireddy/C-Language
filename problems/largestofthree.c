#include <stdio.h>

int greatest(int a, int b, int c);

int main() 
{
    int num1, num2, num3;

    printf("Enter num1 numbers: ");
    scanf("%d", &num1);
    printf("Enter num2 numbers: ");
    scanf("%d", &num2);
    printf("Enter num3 numbers: ");
    scanf("%d", &num3);
    
    printf("Greatest number is: %d\n", greatest(num1, num2, num3));

    return 0;
}

int greatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}