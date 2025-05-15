#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0,iMult = 1;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        int iMult = 1;
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
