#include<stdio.h>

int main()
{
    int choice=0;
    float kilograms=0.0f;
    float pounds=0.0f;

    printf("Weight conversion calculator\n");
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);
    
    if (choice == 1)
    {
        //Kilograms to pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.20462;
        printf("The %.2f kilograms is equal to the %.2f pounds\n",kilograms,pounds);
    }
    else if (choice == 2)
    {
        //pounds to kilograms
        printf("Enter the weight in Pounds: ");
        scanf("%f",&pounds);
        kilograms = pounds / 2.20462;
        printf("The %.2f Pounds are equal to the %.2f kilograms\n",pounds,kilograms);
    }
    else
    {
        printf("Invalid choice! please enter either 1 or 2");
    }
    
    return 0;
}