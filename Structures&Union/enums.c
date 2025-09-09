/*#include<stdio.h>

enum Status
{
    SUCCESS, FAILURE, PENDING
};

void Connection(enum Status status);

int main()
{
    enum Status status = SUCCESS;

    Connection(status);

    return 0;
}

void Connection(enum Status status)
{
    switch (status)
    {
    case SUCCESS:
        printf("The Connection was Successful!");
        break;
    case FAILURE:
        printf("Could not connect!");
        break;
    case PENDING:
        printf("Connecting...");
        break;    
    }
}*/

//Using type def
#include<stdio.h>

typedef enum 
{
    SUCCESS, FAILURE, PENDING
}Status;

void Connection(Status status);

int main()
{
    Status status = SUCCESS;

    Connection(status);

    return 0;
}

void Connection(Status status)
{
    switch (status)
    {
    case SUCCESS:
        printf("The Connection was Successful!");
        break;
    case FAILURE:
        printf("Could not connect!");
        break;
    case PENDING:
        printf("Connecting...");
        break;    
    }
}