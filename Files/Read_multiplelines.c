/*#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("Files_trail.txt","r");

    char text[100];

    while (fgets(text, 100, fptr))
    {
        printf("%s",text);
    }
    fclose(fptr);
}*/

#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("Files_trail.txt","r");

    char text[100];

    if (fptr != NULL)
    {
        while (fgets(text, 100, fptr))
    {
        printf("%s",text);
    }
    }
    else
    {
        printf("Not able to open the file.");
    }
    fclose(fptr);
}