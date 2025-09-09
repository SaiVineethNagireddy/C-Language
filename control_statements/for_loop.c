/*#include<stdio.h>
int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",i);
    }
    return 0;
}*/

#include<stdio.h>
#include<windows.h>//For windows
//#include<unistd.h>(Linux and mac)
int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",i);
        Sleep(1000);//takes 1 sec for each loop execution
    }
    return 0;
}