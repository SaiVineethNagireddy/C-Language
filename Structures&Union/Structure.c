#include<stdio.h>
struct student
{
    char name[10];
    int Rollno;
    float Percentage;
};

int main()
{
    struct student s1={"sai",2,8.6};
    printf("%s \n",s1.name);
    printf("%d \n",s1.Rollno);
    printf("%.2f",s1.Percentage);
    return 0;
}

/*#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int Rollno;
    float Percentage;
};

int main()
{
    struct student s1;
    strcpy(s1.name,"Hello there");
    s1.Rollno=2;
    s1.Percentage=8.6;
    printf("%s \n",s1.name);
    printf("%d \n",s1.Rollno);
    printf("%.2f",s1.Percentage);
    return 0;
}*/