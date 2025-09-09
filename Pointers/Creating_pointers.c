/*#include<stdio.h>
int main()
{
    int a=10;
    printf("%d \n",a);//gives the value that is stored in the variable
    printf("%p",&a);//gives the memory address
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a=30;
    int* ptr=&a;

    printf("%d \n", a);
    printf("%p \n",&a);//gives the memory address by using &
    printf("%p",ptr);//gives the memory address by using the pointer that we created

    return 0;
}