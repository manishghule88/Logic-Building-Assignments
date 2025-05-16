// 1. WAP which accept number from user and return the count of digits in between 3 and 7.
// Input : 2395
// Output : 1

#include <stdio.h>

int MultiDigits(int iNo)
{
    int iMod = 0;
    int iCnt = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        iMult = iMod * iMult;
        iNo = iNo / 10;
        iCnt++;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    printf("Multiplication of the digits is : %d\n",iRet);
    
    return 0;
}