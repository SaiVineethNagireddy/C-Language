#include<stdio.h>

int main()
{
    //Simple Calculator using switch

    char operator='\0';
    float num1=0.0f;
    float num2=0.0f;
    float result=0.0f;

    printf("Enter the value for num1: ");
    scanf("%f",&num1);
    getchar();
    printf("Enter the operator that you wanted to perform {+, -, /, *}: ");
    scanf("%c",&operator);
    printf("Enter the value for num2: ");
    scanf("%f",&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
    if (num2 == 0)
        {
            printf("you cannot divide it by zero!\n");
        }
    else
        {
        result = num1 / num2;
        }
        break;
    default:
        printf("you have entered the Invalid Operator!\n");
        break;
    }
    printf("Result:%.4f",result);

    return 0;
}