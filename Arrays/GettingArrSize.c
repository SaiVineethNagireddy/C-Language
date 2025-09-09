/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};//it gives the size of an array in bytes
    printf("%zu",sizeof(arr));//size of datatype*no of elements  4*4=16
    return 0;
}*/

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};
    printf("%zu",sizeof(arr)/sizeof(arr[0]));//Here we can get the number of elements that are present in an array
    return 0;
}