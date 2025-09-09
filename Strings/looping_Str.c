#include<stdio.h>
int main()
{
    char a[]="I am learning c";
    int i;
    for ( i = 0; i < 15; ++i)
    {
        printf("%c",a[i]);//Here we are accessing the each and every single character so we use %c formatspecifier
    }
    return 0;
}