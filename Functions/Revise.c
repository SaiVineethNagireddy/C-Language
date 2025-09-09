//functions
/*#include<stdio.h>
void add()
{
    int a=10,b=20;
    int c=a+b;
    printf("The value of c is %d",c);
}

int main()
{
    int d=20;
    printf("Calling the c value:%d\n",d);
    add();
    return 0;
}*/

//returning statements
/*#include<stdio.h>
int calculatesum(int a, int b)
{
    return a+b;
}

int main()
{
    calculatesum(10,20);//Do not return any value because we did not store it to the variable
    return 0;
}*/

/*#include<stdio.h>
void calculator(int a,int b,int choice)
{
    switch (choice)
    {
    case 1:
        printf("ADD:%d",a+b);
        break;
    case 2:
        printf("SUB:%d",a-b);
        break;
    case 3:
        printf("Mult:%d",a*b);
        break;
    case 4:
        if(b!=0)
        {
            printf("Division:%f",a/b);
        }
        else
        {
            printf("Cannot be divided by zero");
        }
        break;
    case 5:
        printf("Modulus:%d",a%b);
        break;
    default:
        printf("Enter the correct choice");
        break;
    }
}
int main()
{
    printf("Please enter your choice\n");
    printf("1.ADD 2.SUB 3.Mul 4.Div 5.Mod\n");
    calculator(10,20,2);
    return 0;
}*/

//scope variable
/*#include<stdio.h>
int a=10;
void scope()
{
    int a=5;
    printf("The value of a is:%d\n",a);
}
void usingglobalscope()
{
    printf("The value of a is:%d",a);
}
int main()
{
    int a=20;
    printf("The value of a is:%d\n",a);
    scope();
    usingglobalscope();
    return 0;
}*/

//math functions
/*#include<stdio.h>
#include<math.h>
int main()
{
   int a;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("%.2f \n",sqrt(a));//Square root
   printf("%.2f \n",ceil(a));//lowest to the point value
   printf("%.2f \n",floor(a));//Highest value nearest to the integer
   printf("%.2f",pow(a,3));//gives the value of a to the power of b
   return 0;
}*/

/*#include<stdio.h>
int sum(int k)
{
    if (k>0)
    {
        return k+sum(k-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int result=sum(10);
    printf("%d",result);
    return 0;
}*/