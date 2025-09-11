#include<stdio.h>

int main()
{
    int i,table,num;

    printf("Enter the table you want:");
    scanf("%d",&table);
    printf("Enter the no of steps you want:");
    scanf("%d",&num);

    for ( i = 1; i <=num; i++)
    {
        printf("%d * %d = %d\n", table, i, table*i);
    }
        
    return 0;
}