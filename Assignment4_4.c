// 1. Write a program which accept number from user and return summation of all its non factors..
// Input : 12
// Output : 50

#include <stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("The Summaction of non factors are : %d\n",iRet);
    
    return 0;
}