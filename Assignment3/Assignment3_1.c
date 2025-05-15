#include <stdio.h>

void PrintEven(int iNo)
{
    int iRet = 1, iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iRet = 2 * iCnt;
        printf("%d\t",iRet);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
