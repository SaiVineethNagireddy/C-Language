//Diamond shape

#include<stdio.h>
int main()
{
    int i,j,s;

    //upper triangle
    for ( i = 0; i <= 2; i++)
    {
        for ( s = 1; s <= 2 - i; s++)
        {
           printf(" ");
        }
        for ( j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //lower triangle
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