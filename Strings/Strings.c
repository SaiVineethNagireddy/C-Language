/*#include<stdio.h>
int main()
{
    char a[]="I am learning C";
    printf("%s \n",a);
    printf("%zu",sizeof(a));
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="";
    printf("Please! Enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1]='\0';
    printf("Your name is:%s",name);
    return 0;
}*/

//Multiple string elements
#include<stdio.h>
int main()
{
    char names[][11]={"saivineeth", "ravi", "bhaskar", "mohan"};

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",names[i]);
    }
    return 0;
}