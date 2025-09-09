#include<stdio.h>
int main()
{
    int x=10;
    printf("%d \n",x>1 && x<20);
    printf("%d \n",x>1 || x<20);
    printf("%d \n",!(x>1 && x<20));
    return 0;
}