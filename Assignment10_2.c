// 1. WAP which accept number from user and return the count of odd digits.
// Input : 2395
// Output : 1

#include <stdio.h>

int CountOdd(int iNo)
{
    int iMod = 0;
    int iCnt = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        if((iNo % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
        iCnt++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("The Count of Odd is : %d\n",iRet);
    
    return 0;
}