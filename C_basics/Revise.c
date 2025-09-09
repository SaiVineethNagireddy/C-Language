/*#include<stdio.h>
int main()
{
    printf("let's Revise");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    char e[20];
    
    printf("enter the input for the variables\n");
    printf("The input for a is:");
    scanf("%d",&a);
    getchar();
    printf("The input for b is:");
    scanf("%c",&b);
    printf("The input for c is:");
    scanf("%f",&c);
    printf("The input for d is:");
    scanf("%lf",&d);
    getchar();
    printf("The input for e is:");
    scanf("%s",e);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("Using operators\n");
    int a=10;
    int b=20;
    int c=a+b;
    printf("The value of c is: %d",c);
    return 0;
}*/

//modifying variable
/*#include<stdio.h>
int main()
{
    int a=10;
    a=5;
    printf("The value of a is modified into:%d",a);
    return 0;
}*/

//Using constant
/*#include<stdio.h>
int main()
{
    const int a=20;
    a=10;
    printf("The value of a cannot be modified:%d",a);//error occures because it cannot be changed
    return 0;
}*/

//assigning single value for both variables 
/*#include<stdio.h>
int main()
{
    int a,b;
    a=b=10;
    printf("The value is assigned to both:%d",a,b);
    return 0;
}*/

//operators
/*#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("The value of a and b is:%d,%d\n",a,b);
    //Arithmetic operator
    printf("addition a+b=%d\n",a+b);
    printf("Subtraction a-b=%d\n",a-b);
    if (b!=0)
    {
         printf("division a/b=%d\n",a/b);
    }
    else
    {
        printf("Denominator cannot be Zero");
    }
    printf("multiplication a*b=%d\n",a*b);
    printf("Modulus a%%b=%d",a%b);
    return 0;
}*/

//if-condition
/*#include<stdio.h>
int main()
{
    int a=5;
    if (a<10)
    {
        printf("The value of a is lessthan 10");
    }
    return 0;
}*/

//if else
/*#include<stdio.h>
int main()
{
    int a=10;
    if (a<11)
    {
        printf("The value of a is less than 11");
    }
    else
    {
        printf("The value of a is greater than 11");
    }
    return 0;
}*/

//else if
/*#include<stdio.h>
int main()
{
    int a=10;
    if (a<11)
    {
        printf("The value of a is less than 11");
    }
    else if (a>11)
    {
        printf("The value of a is greater than 11");
    }
    else
    {
        printf("The value of a is equal to the 11");
    }
    return 0;
}*/

//nested if 
/*#include<stdio.h>
int main()
{
    int a=10;
    if(a==10)
    {
        printf("The value of a is equal to 10\n");
        if (a<20)
        {
            printf("The value of a is less than 20\n");
        }
        
    }
    else
    {
        printf("The above conditions are false");
    }
    return 0;
}*/

//looping While loop
/*#include<stdio.h>
int main()
{
    int a=30;
    while (a<=40)
    {
       printf("%d \n",a);
       a++;
    }
    
    return 0;
}*/

//do-while
/*#include<stdio.h>
int main()
{
    int a=30;
    do
    {
       printf("%d \n",a);
       a--;
    } while (a>=25);
    
}*/

//for loop
/*#include<stdio.h>
int main()
{
    int i,count=30;
    for ( i = 20; i <= count; i++)
    {
        printf("%d \n",i);
    }
    return 0;
}*/

//nested for
/*#include<stdio.h>
int main()
{
    int count=10,n=2,i,j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= count; j++)
        {
            printf("%d * %d = %d \n",i,j,i*j);
        }
        
    }
    return 0;
}*/

//User input
/*#include<stdio.h>
int main()
{
    char myName[20];
    int roll;
    char section[4];

    printf("My name is:");
    scanf("%s",myName);
    printf("My roll is:");
    scanf("%d",&roll);
    printf("My section is:");
    scanf("%s",section);
    printf("The result is\n");
    printf("Name:%s\nroll:%d\nSection:%s",myName,roll,section);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char fname[20]="";
    printf("Please enter your first name:");
    scanf("%s",fname);
    printf("The first name is:%s",fname);//cannot read after the space values
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="";
    printf("Please! Enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1]='\0';
    printf("Your name is:%s",name);
    return 0;
}*/