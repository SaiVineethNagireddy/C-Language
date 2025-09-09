#include<stdio.h>

struct Multiple_Data
{
    char name[15];
    int a;
    float percentage;
};

int main()
{
    struct Multiple_Data d_1={"saivineeth",2,8.9};
    struct Multiple_Data d_2={"Teja",8,9.0};
    struct Multiple_Data d_3={"seshagiri",1,7.2};

    printf("%s %d %f \n",d_1.name,d_1.a,d_1.percentage);
    printf("%s %d %f \n",d_2.name,d_2.a,d_2.percentage);
    printf("%s %d %f",d_3.name,d_3.a,d_3.percentage);
    return 0;
}