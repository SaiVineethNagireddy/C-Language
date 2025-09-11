//removing punctuations

#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char txt[100] = "";
    char modify[100]="";

    printf("Enter your text:");
    fgets(txt, sizeof(txt), stdin);
    txt[strlen(txt) - 1] = '\0';

    for ( i = 0; i < strlen(txt); i++)
    {
        if (txt[i] == ',' || txt[i] == '!' || txt[i] == '.' || txt[i] == '*')
        {
            continue;
        }
        modify[j++] = txt[i];
    }

    printf("The original text is:%s\n",txt);
    printf("The modified text is:%s",modify);

    return 0;
}