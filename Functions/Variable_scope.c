#include<stdio.h>
int a=10;

void Scope()
{
    int a =120;
    printf("%d \n",++a);
}

int main()
{
    Scope();
    printf("%d",a);
    return 0;
}