#include<stdio.h>
int main()
{
    printf("We use format specifiers so that we can retrive the stored value from the variable");
    int n=10;
    char c='A';
    float p=10.9999999999;
    double d=10.99999999;
    char text[]="c-language";
    printf("%d, %c, %f, %lf, %s", n, c, p, d, text);
    return 0;
}