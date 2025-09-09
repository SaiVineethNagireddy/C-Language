#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("%p \n",&arr[i]);//Gives the address of the elements in the array
    }
    
    return 0;
}