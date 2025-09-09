/*#include<stdio.h>
int main()
{
    int i=0;
    //continue in the while loop
    while (i<5)
    {
         if (i==2)
    {
        i++;
       continue;
    }
        printf("%d \n",i);
        i++;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i=0;
    //break statement in the while loop
    while (i<5)
    {
        if (i==2)
        {
            break;
        }
       printf("%d \n",i);
       i++; 
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        if (i==2)
        {
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        if (i==2)
        {
            break;
        }
        printf("%d \n",i);
    }
    return 0;
}