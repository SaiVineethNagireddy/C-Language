#include<stdio.h>
void main()
{
FILE *fptr;
fptr = fopen("Files_trail.txt", "w");
fclose(fptr);
}