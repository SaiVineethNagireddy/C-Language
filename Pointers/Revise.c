/*#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int* ptr=&b;
    printf("%d\n",a);//access the value from the a variable
    printf("%p\n",&a);//here it access the address of the variale a
    printf("%d\n",*ptr);//in this it access the value by using the pointer address
    printf("%p",ptr);//Here it shows the address of the variable b in the pointer 
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int arr2[]={5,4,3,2,1};
    int * ptr=arr2;
    int i;
    printf("The address of the arr elements are\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%p\n",&arr[i]);        
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr2[]={5,4,3,2,1};
    int * ptr=arr2;
    int i;
    printf("By using pointer\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*(ptr + i));
    } 
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr2[]={5,4,3,2,1};
    int * ptr=arr2;
    int i;
    printf("Deferencing of array\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%p\n",(void*)(ptr+i));
    } 
    return 0;
}*/