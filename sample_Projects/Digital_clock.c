//DIGITAL CLOCK

#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<windows.h>

int main()
{
    time_t rawtime = 0;//here we are using time_t  which accesses the seconds since jan 1 1970 we are setting it to be 0 
    struct tm *pTime = NULL;//we are creating a pointer for tm struct which is present in the time.h
    bool isRunning = true;//here we set a bool value for running the code

    printf("DIGITAL CLOCK\n");

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d",pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        Sleep(1000);
    }
    return 0;
}

//Improved version

/*#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<windows.h>

int main()
{
    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);

        system("cls");//which helps to update for every second

        printf("TIME: %02d:%02d:%02d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        printf("DATE: %02d/%02d/%04d\n", pTime->tm_mday, pTime->tm_mon + 1, pTime->tm_year + 1900);

        Sleep(1000);
    }
    return 0;
}*/
