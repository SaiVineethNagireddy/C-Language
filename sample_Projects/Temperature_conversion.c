#include<stdio.h>

int main()
{
    //Temperature conversion program

    char choice = '\0';
    float fahernheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature conversion program\n");
    printf("C. celsius to Fahernheit\n");
    printf("F. Fahernheit to celsius\n");
    printf("Enter your Choice\n");
    printf("Is the temp in celsius (C) or Fahernheit(F): ");
    scanf("%c",&choice);

    if (choice == 'C' || choice == 'c')
    {
        printf("celsius to Fahernheit\n");
        printf("Enter the Temperature in celsius: ");
        scanf("%f",&celsius);
        fahernheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahernheit\n",celsius,fahernheit);

    }
    else if (choice == 'F' || choice == 'f')
    {
        printf("Fahernheit to celsius\n");
        printf("Enter the Temperature in Fahernheit: ");
        scanf("%f",&fahernheit);
        celsius = (fahernheit - 32) * 5 / 9;
        printf("%.1f Fahernheit is equal to %.1f Celsius",fahernheit,celsius);
    }
    else
    {
        printf("Invalid Choice!");
    }
    
    return 0;
}