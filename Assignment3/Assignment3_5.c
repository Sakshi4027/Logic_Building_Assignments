#include <stdio.h>

#define TRUE 1
#define FALSE 0

int ChkVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    int bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("%c is Vowel",cValue);
    }
    else
    {
        printf("%c is not Vowel",cValue);
    }

    return 0;
}