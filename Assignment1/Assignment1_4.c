#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
    if((iNo % 5) == 0)
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
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}