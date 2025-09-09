#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    int* ptr=arr;

    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",*(ptr + i));
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    int* ptr=arr;

    for ( i = 0; i < 5; i++)
    {
        printf("%p \n",(void*)(ptr + i));//By using referencing
    }
    return 0;
}*/