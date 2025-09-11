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
    printf("The original number:%d\n",original);
    printf("The number after reversed:%d",reversed);

    return 0;
}