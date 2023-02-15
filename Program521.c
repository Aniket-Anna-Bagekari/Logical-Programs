#include<stdio.h>

void DisplayConvert(char cValue)
{
    int isupper(), islower();
    int tolower(), toupper();

    if(isupper(cValue))
    {
        cValue = tolower(cValue);
        printf("%c\n",cValue);
    }
    else if(islower(cValue))
    {
        cValue = toupper(cValue);
        printf("%c\n",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
}
