/*#include<stdio.h>
int main()
{
    int n;
    int i;
    int result;
    printf("Enter the number that you want to make mathematical tables:");
    scanf("%d",&n);
    for(i=1; i<11; i++)
    {
        result=n*i;
        printf("%d * %d = %d \n",n,i,result);
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n,j,i,result;
    printf("Enter the number of tables you want:");
    scanf("%d",&n);
    printf("The number of tables that are going to print are: %d \n",n);
    for ( i = 1; i <= n; i++)
    {
        for(j=1; j<=10; j++)
        {
            result =i * j;
            printf("%d * %d = %d \n",i,j,result);
        }
    }
    return 0;
}