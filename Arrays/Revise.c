//array inital
/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("The First element in the array is:%d",arr[0]);
    return 0;
}*/

//looping in an array
/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int i;
    for ( i = 0; i <= 4; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/

//Array modification
/*#include<stdio.h>
int main()
{
    int arr[]={0,2,3,4,5,6};
    printf("Before modification of an array:%d\n",arr[0]);
    arr[0]=1;
    printf("The array after modification:%d",arr[0]);
    return 0;
}*/

//size of an array
/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int arr1[]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int arr3[6]={1,2,3,4,5};
    //int arr4[2]={1,2,3,4,5};
    printf("The size of an array is %zu\n",sizeof(arr));//int is 4 bytes so there are 5 elements which is 5*4=20
    printf("The size of an array is %zu\n",sizeof(arr1));
    printf("The size of an array is %zu\n",sizeof(arr2));//we assign the expect values as 5 no issue 
    printf("The size of an array is %zu\n",sizeof(arr3));//we gave more size to the array
    //printf("The size of an array is %zu",sizeof(arr4));//we assigned less size to the array
    return 0;
}*/

//Multidimensional array
/*#include<stdio.h>
int main()
{
    int Matrix[3][3]={{1,2,3},{4,5,6}};
    printf("The value in row0,column0 is:%d",Matrix[0][0]);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    int Matrix[2][3]={{1,2,3},{4,5,6}};
    printf("Now let us loop this\n");
    printf("The elements in the array are\n");
    for ( i = 0; i < 2; i++)
    {
        for (j = 0;j  < 3; j++)
        {
            printf("%d",Matrix[i][j]);
        }
    }
    return 0;
}*/

//modifying ele in multidimensional array
/*#include<stdio.h>
int main()
{
    int matrix[2][3]={{9,2,3},{4,5,6}};
    printf("The int matrix[0][0] before modification is:%d\n",matrix[0][0]);
    matrix[0][0]=1;
    printf("The value in the matrix[0][0] after modification is:%d",matrix[0][0]);
    return 0;
}*/

//Finding the number of elements in an array
/*#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("The no.of elements in an array are %zu",sizeof(arr)/sizeof(arr[0]));
    return 0;
}*/