#include<stdio.h>
int i;
void arrayASParameter(int arr[5])
{
    for ( i = 0; i < 5; i++)
    {
        printf("The Elements in the array are:%d\n",arr[i]);
    }
}
    int main()
    {
        int arr[5]={1,2,3,4,5};
        arrayASParameter(arr);
        return 0;
    }
    
