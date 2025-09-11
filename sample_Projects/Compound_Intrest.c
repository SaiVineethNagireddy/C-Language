#include<stdio.h>
#include<math.h>

int main()
{
    //Compound Intrest
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    printf("Enter the principal Amount: ");
    scanf("%lf",&principal);

    printf("Enter the rate of interest: ");
    scanf("%lf",&rate);
    rate = rate /100;

    printf("Enter the number of years: ");
    scanf("%d",&years);

    printf("Enter the number of times compounded per year: ");
    scanf("%d",&times_compounded);

    total= principal * pow(1 + rate/times_compounded, times_compounded*years);

    printf("The total amount after it is compounded: $%.2lf",total);

    return 0;
}