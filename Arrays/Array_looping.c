#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5.9};//Avoid mixing the different Datatype
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}*/