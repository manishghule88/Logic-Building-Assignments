// 3. WAP which returns difference between Even factorial and odd factorial of a given number.
// Input : 5
// Output : -7 (8 - 15)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt, iDiff = 0;
    int iEvenMult = 1;
    int iOddMult = 1;

    if(iNo < 1)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenMult = iCnt * iEvenMult;
        }
        else 
        {
            iOddMult = iCnt * iOddMult;
        }
        iDiff = iEvenMult - iOddMult;
    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("The Factorial of Difference is : %d\n",iRet);

    return 0;
}