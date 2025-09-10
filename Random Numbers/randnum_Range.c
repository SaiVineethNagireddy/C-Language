#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int min=50;
    int max=100;
    printf("%d",(rand() % (max - min +1) + min));//now it generates random number b/w 50 and 100
    return 0;
}