/*#include<stdio.h>
int main()
{
    char myname[10];
    printf("Enter your name:");
    scanf("%s",myname);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char name[10]="Sai";
    printf("My name is:%s",name);
    return 0;
}*/

//looping in str
/*#include<stdio.h>
int main()
{
    char name[]="sai";
    int i;
    printf("The formatspecifier that we use is %%c for accessing each element in an string\n");
    for ( i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    {
        printf("%c\n",name[i]);
    }
    return 0;
}*/

//modification
/*#include<stdio.h>
int main()
{
    char name[]="help";
    name[3]='l';
    printf("The Word after modification is:%s",name);
    return 0;
}*/

//accessing a single char from str
/*#include<stdio.h>
int main()
{
    char name[]="Hari";
    printf("The first char in the name is:%c",name[0]);
    return 0;
}*/

//string functions
//length, size, Defined length, str concat, str cpy, str cmp, lower and uppercase
/*#include<stdio.h>
#include<string.h>
int main()
{
    char name1[4];
    char name2[8];
    char name3[9];
    printf("Enter the names for both name1 and name2\n");
    printf("The name1 is:");
    scanf("%s",name1);
    printf("The name2 is:");
    scanf("%s",name2);
    printf("The name3 is:");
    scanf("%s",name3);
    printf("Now let us apply string functions\n");
    printf("string length\n");
    printf("The length of the both strings are:%zu,%zu\n",strlen(name1),strlen(name2));
    printf("The size of the string is:%zu,%zu\n",sizeof(name1),sizeof(name2));
    printf("If the length is defined and if we use less memory then:%zu\n",sizeof(name3));
    strcat(name1,name2);
    printf("Concating 2 strings into one:%s\n",name1);
    strcpy(name3,name2);
    printf("TO copy one string into another string:%s\n",name3);
    printf("Converting the string into lowercase:%s\n",strlwr(name1));
    printf("Now Converting the string into uppercase:%s\n",strupr(name1));
    printf("%s,%s,%s",name1,name2,name3);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]="/0";
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] ='\0';
    printf("Your name is:%s",name);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
typedef char String;

int main()
{
    String name[20]="\0";
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    return 0;
}*/

#include<stdio.h>
int main() 
{
    char names[3][20]={"Saivineeth","Teja","Chenna"};
     char fruits[3][20]={"Apple","banana","Custardapple"};
    printf("The names are:%s\n",names[2]);
    //using loops
    int count = sizeof(fruits)/sizeof(fruits[0]);
    for (int i = 0; i < count; i++)
    {
        printf("The fruits names are:%s\n",fruits[i]);
    }
    return 0;
}