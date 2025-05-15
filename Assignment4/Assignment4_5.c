#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0,iSumnf = 0,iSumf;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 1;iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumnf = iSumnf + iCnt;
        }
        else
        {
            iSumf = iSumf + iCnt;
        }
    }
    return (iSumf - iSumnf);
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}