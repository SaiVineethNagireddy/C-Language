#include<stdio.h>
int main()
{
    int a=10;
    printf("%d",a);//The program will output a large integer number representing the memory address where a is stored, such as:6422300
    printf("%p",&a);//it gives the memory address of the variable a
    return 0;
}