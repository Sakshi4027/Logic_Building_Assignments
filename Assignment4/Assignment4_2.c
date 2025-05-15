#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt > 0; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Factors of %d in reverse order:\n",iValue);
    FactRev(iValue);

    return 0;
}