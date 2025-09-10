//triangle

#include<stdio.h>
int main()
{
    int i,j,s;
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
    return 0;
}