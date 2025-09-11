#include <stdio.h>

int main() 
{
    int num, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
