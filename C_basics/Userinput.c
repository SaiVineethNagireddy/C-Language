/*#include<stdio.h>
int main()
{
    int a,b;
    char c[20];
    printf("Enter the a value:");
    scanf("%d",&a);
    printf("Enter the b value:");
    scanf("%d",&b);
    printf("Enter your something in characters:");
    scanf("%s",c);
    printf("The value of a is:%d \nThe value of b is:%d \n",a,b);
    printf("The character that you have entered is:%s",c);
    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="";
    printf("Please! Enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1]='\0';
    printf("Your name is:%s",name);
    return 0;
}