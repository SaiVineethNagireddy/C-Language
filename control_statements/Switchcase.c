#include<stdio.h>
int main()
{
  int a;
  printf("Enter the values from range 1-7:");
  scanf("%d",&a);
  
  switch (a)
  {
  case 1:
    printf("Monday");
    break;

    case 2:
    printf("Tuesday");
    break;
  
    case 3:
    printf("Wednesday");
    break;

    case 4:
    printf("Thrusday");
    break;

    case 5:
    printf("Friday");
    break;

    case 6:
    printf("saturday");
    break;

    case 7:
    printf("Sunday");
    break;

  default:
     printf("The entered value exceeds the range of values between 1 to 7");
    break;
  }
  return 0;
}