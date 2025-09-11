#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int temp = 0;
    printf("Enter the values for swapping\n");
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("The values after swapping\n");
    printf("The first value is:%d\n",a);
    printf("The second value is:%d",b);

    return 0;
}