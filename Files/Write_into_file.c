#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr=fopen("Files_trail.txt","w");

    fprintf(fptr, "Hello There! \n I have started learning files in c language");

    fclose(fptr);
}