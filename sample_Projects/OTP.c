#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));//generating a rand assigning based on time and making it to be null
    int min = 1000;
    int max = 9999;

    int OTP = (rand() % (max - min + 1 )+ min);// it generates random 4 digit numbers

    printf("%d",OTP);

    return 0;
}