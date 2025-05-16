// 1. WAP which accept number from user and return difference between summation
// of even digits and summation of odd digits.

// Input : 2395
// Output : -15 (2 - 17)

#include <stdio.h>

int CountDiff(int iNo)
{
    int iMod = 0;
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        if((iMod % 2) == 0)
        {
            iEven = iMod + iEven;
        }
        else 
        {
            iOdd = iMod + iOdd;
        }
        iNo = iNo / 10;
        iCnt++;

        iDiff = iEven - iOdd;
    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference of the Summation is : %d\n",iRet);
    
    return 0;
}