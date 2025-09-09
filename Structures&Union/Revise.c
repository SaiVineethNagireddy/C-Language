//structures
/*#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    char course[10];
    char section[10];
};

int main()
{
    struct student s1={"Saivineeth",2,"MCA","A"};//Initilizing
    printf("My name is %s.\nMy Roll number is:%d.\nI am studying in %s-Section %s",s1.name,s1.rollno,s1.course,s1.section);//accesing
    //size of the structure
    printf("The size of the structure is:%zu\n",sizeof(s1));
    //initilize in seperate 
    struct student s2;
    strcpy(s2.name,"Sai charan");
    s2.rollno=3;
    strcpy(s2.course,"MCA");
    strcpy(s2.section,"A");
    printf("My name is %s.\nMy Roll number is:%d.\nI am studying in %s-Section %s",s2.name,s2.rollno,s2.course,s2.section);
    return 0;
}*/

//Union
/*#include<stdio.h>
#include<string.h>
union student
{
    char name[20];
    int rollno;
    char course[10];
    char section[10];
};

int main()
{
    //We cannot assign like this in union all at once [union student s1={"Saivineeth",2,"MCA","A"};]
    union student s1;
     strcpy(s1.name,"Sai charan");
    s1.rollno=2;
    strcpy(s1.course,"MCA");
    strcpy(s1.section,"A");//Initilizing
    printf("My name is %s.\nMy Roll number is:%d.\nI am studying in %s-Section %s",s1.name,s1.rollno,s1.course,s1.section);//accesing
    //size of the union
    printf("The size of the structure is:%zu\n",sizeof(s1));//every thing stores in the single variable size which is max
    //initilize in seperate 
    union student s2;
    strcpy(s2.name,"Sai charan");
    s2.rollno=3;
    strcpy(s2.course,"MCA");
    strcpy(s2.section,"A");
    printf("My name is %s.\nMy Roll number is:%d.\nI am studying in %s-Section %s",s2.name,s2.rollno,s2.course,s2.section);
    return 0;
}*/