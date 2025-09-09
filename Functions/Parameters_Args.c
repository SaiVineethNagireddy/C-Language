//Single parameter
#include<stdio.h>

void greet(char name[])
{
    printf("Good Morning %s \n",name);
}

int main()
{
    greet("sai");
    greet("Vineeth");
    greet("Teja");

    return 0;
}

//Multiple parameters
/*#include<stdio.h>

void Intro(char name[10], int age)
{
    printf("My name is %s.I am %d years old\n",name,age);
}

int main()
{
    Intro("sai",21);
    Intro("Teja",20);
    Intro("Mani",25);
    return 0;
}*/