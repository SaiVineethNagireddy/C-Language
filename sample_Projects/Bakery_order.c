#include<stdio.h>
#include<string.h>

int main()
{
    char Item[20]="";
    float price=0.0f;
    int Quantity=0;
    float totalprice=0.0f;// if we use float totalprice=0.0; it is considered as the double literal

    //printf("%s \n %f \n %d \n %f",Item,price,Quantity,totalprice);

    printf("Enter the itemName that you wanted to buy: ");
    fgets(Item, sizeof(Item), stdin);
    Item[strlen(Item) -1]= '\0';

    printf("The price of each unit is: ");
    scanf("%f",&price);

    printf("How many units you would like to purchase: ");
    scanf("%d",&Quantity);

    printf("You have ordered the %s.\nThe Quantity that you have ordered %d \n",Item,Quantity);

    totalprice=price * Quantity;

    printf("The Totalprice is: $%.2f",totalprice);

    return 0;
}