#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr=fopen("Files_trail.txt","r");

    char text[50];

    fgets(text, 50, fptr);

    printf("%s",text);

    fclose(fptr);
}

/*#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr=fopen("Files_trail.txt","r");

    char text[];

    fgets(text, fptr);//we get error the no.of string characters should be declared

    printf("%s",text);

    fclose(fptr);
}*/

/*#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr=fopen("Files_trail.txt","r");

    char text[50];

    fgets(text, 5, fptr);//The printed string will be null-terminated as fgets() adds a null character after the read characters.

    printf("%s",text);

    fclose(fptr);
}*/