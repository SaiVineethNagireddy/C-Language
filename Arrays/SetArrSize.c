#include<stdio.h>
int main()
{
    int arr[4]={1,2,3,4};
    int i;
    for ( i = 0; i <=3; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int arr[4]={1,2,3,4,5};//Error excess elements in the array initializer
    int i;
    for ( i = 0; i <=3; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[4]={1,2,3,4};
    int i;
    for ( i = 0; i <=4; i++)//exceeds the range in the condition so it might cause error or gives the garbage values 
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}*/