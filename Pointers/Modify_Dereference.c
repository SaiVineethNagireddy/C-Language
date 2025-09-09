#include<stdio.h>
int main()
{
    int myNumbers[4] = {1,2,3,4};
    int i;
    int* ptr=myNumbers;
    *myNumbers=10;
    *(myNumbers+1)=20;
    for ( i = 0; i < 4; i++)
    {
       printf("%d \n",*(ptr+i));
    }
    return 0;
}