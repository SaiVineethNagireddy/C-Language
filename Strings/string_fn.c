#include<stdio.h>
#include<string.h>
int main()
{
    //string Length
    char a[50]="I am learning c.";
    printf("%zu \n\n",strlen(a));

    //string Size
    printf("%zu \n\n",sizeof(a));

    //string size if the length is defined
    char b[50]=" I am sai";
    printf("%zu \n\n",sizeof(a));

    //Concatenate strings
    strcat(a,b);
    printf("%s \n",a);//b is added to a
    printf("%s \n\n",b);//b is unchanged

    //string copy
    strcpy(b,a);
    printf("%s \n",b);//it remains same
    printf("%s \n\n",a);//it access the a data
    
    //string compare
    printf("%d \n",strcmp(a,b));
    char c[50]="enjoy";
    printf("%d \n\n",strcmp(c,b));// some times it gives the output based on ASCII values 

    //string uppercase & lowercase
    strlwr(a);
    printf("%s \n",a);
    strupr(b);
    printf("%s",b);
    return 0;
}