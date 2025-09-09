/*#include<stdio.h>
int main()
{
    char myText[]="hello";
    printf("%s", myText);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("practice the program");
    return 0;
}*/

/*#include<stdio.h>
void main()
{
  printf("what happens if we use void"); 
}*/

/*#include<stdio.h>
int main()
{
    int a=10;
    printf("the value of a:%d",a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=10;
    char c='A';
    float d=10.1;
    double b=12.324233244;
    printf("the data of different datatypes is \n %d \n %c  \n %f \n %lf",a, c, d, b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    a=b;
    printf("%d \n",a);
    printf("%d",b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=10;
    int b;
    b=a;
    printf("%d \n",b);//if not swapped it is default set to 0
    printf("%d",a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    float a=10.55633;
    printf("%.2f",a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char A[]="hello";
    printf("%zu",sizeof(A));//the output is 6 because it includes the null value
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    //Type conversion
    //Implicit conversion
    float a=6;
    printf("%.2f \n",a);
    //Explicit conversion
    int b=10;
    int c=20;
    float sum =(float) b/c;
    printf("%f",sum);
}*/

/*#include<stdio.h>
int main()
{
    //how to use the constant keyword
    const int a=10;
    int b=20;
    a=b;//error occur assignment of read-only variable
    printf("%d",a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    const int a=10;
    printf("%d",a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    const int a=10;
    printf("Enter the value:");
    scanf("%d",&a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a value:");
    scanf("%d",&a);
    printf("Enter the b value:");
    scanf("%d",&b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    char myletter;
    printf("Enter the value:");
    scanf("%d",&a);
    getchar();
    printf("Enter the character:");
    scanf("%c",myletter);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    printf("The value of c is: %c",c);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char c;
    int a;
    printf("Enter the character:");
    scanf("%c",&c);
    printf("Enter the value:");
    scanf("%d",&a); 
    printf("The value of c and a is: %c and %d",c,a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    float a=10.7899787423;
    double b=10.7899787423;
    printf("the float value is %.2f \n the double value is %lf",a,b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a=10;
    char b='c';
    float f=1.353465345;
    double d=2.4534623423;
    int arr[]={1,2,3,4,5};

    printf("the size of int is:%zu \n",sizeof(a));
    printf("the size of char is:%zu \n",sizeof(b));
    printf("the size of float is:%zu \n",sizeof(f));
    printf("the size of double is:%zu \n",sizeof(d));
    printf("the size of int is:%zu",sizeof(arr));
    return 0;
}*/

#include <stdio.h>
int main() {
    int n, i, j, space;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print spaces
        for(space = 1; space <= n-i; space++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}