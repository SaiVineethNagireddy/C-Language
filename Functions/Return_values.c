#include<stdio.h>

int addScore(int Add)
{
    return 3+Add;
}

int main()
{
   printf("The result After AddScore is:%d",addScore(40));
    return 0;
}

//Multiple Parameters
/*#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int main()
{
    printf("The addition of the two numbers is:%d",add(10,15));
    return 0;
}*/

/*#include<stdio.h>

int calculateSum(int x, int y) {
  return x + y;
}

int main() 
{
  int resultArr[6];

  resultArr[0] = calculateSum(55, 39);
  resultArr[1] = calculateSum(86, 20);
  resultArr[2] = calculateSum(154, 15);
  resultArr[3] = calculateSum(92, 321);
  resultArr[4] = calculateSum(77, 73);
  resultArr[5] = calculateSum(16, 132);

  for (int i = 0; i < 6; i++) {
    printf("Result%d is = %d\n", i + 1, resultArr[i]);
  }

  return 0;
}*/