// 1. WAP which accept number from user and return the count of digits in between 3 and 7.
// Input : 2395
// Output : 1

#include <stdio.h>

int CountRange(int iNo)
{
    int iMod = 0;
    int iCnt = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        if(iMod > 3 && iMod < 7)
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

    iRet = CountRange(iValue);
    printf("The range is : %d\n",iRet);
    
    return 0;
}