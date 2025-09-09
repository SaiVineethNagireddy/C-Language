#include<stdio.h>
#include<string.h>

union student
{
    char name[20];
    int age;
    int Rollno;
    float percentage;
};

int main()
{
    union student s1;
    strcpy(s1.name, "sai");
    printf("Name: %s\n", s1.name);
    
    s1.age = 21;
    printf("Age: %d\n", s1.age);

    s1.Rollno = 2;
    printf("Rollno: %d\n", s1.Rollno);

    s1.percentage = 8.6;
    printf("Percentage: %.2f\n", s1.percentage);

    return 0;
}
