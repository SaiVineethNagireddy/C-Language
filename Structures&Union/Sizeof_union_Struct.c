#include<stdio.h>

union student
{
    char name[20];
    int age;
    int Rollno;
    float percentage;
};

struct studentDetails
{
    char name[20];
    int age;
    int Rollno;
    float percentage;
};


int main()
{
    union student s1;
    struct studentDetails s2;
    printf("The size of union:%zu \n",sizeof(s1));//The largest member is 20bytes .so, the entire union will also be 20bytes
    printf("The size of structure:%zu",sizeof(s2));//When it comes to structure it shows 32 by adding up all the bytes of the members
    return 0;
}