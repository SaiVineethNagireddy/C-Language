#include<stdio.h>
int main()
{
    int a=10;
    int* ptr=&a;
    printf("%p \n",ptr);//reference to the memory address
    printf("%d",*ptr);//Dereference to the value that is present in the variable

    return 0;
}