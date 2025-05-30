// 1. Write a program which accept number from user and return summation of all its factors and non factors.
// Input : 12
// Output : 50

#include <stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
        iDiff = iSum1 - iSum2;
    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("The difference between non factors and factors are : %d\n",iRet);
    
    return 0;
}