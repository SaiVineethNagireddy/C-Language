//reverse triangle

#include<stdio.h>
int main()
{
    int i,j,s;
    for ( i = 3; i >= 1; i--)
    {
        for ( s = 0; s < 3 - i; s++)
        {
           printf(" ");
        }
        for ( j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}