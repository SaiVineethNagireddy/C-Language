//Hallow Square

#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            if((i == 1 && j == 1) || (i == 2 && j == 1) )
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}