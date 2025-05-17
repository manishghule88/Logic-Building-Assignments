// 1. Write a program which accept number from user and display its multiplication of factors
// Input : 12
// Output : 144

#include <stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
            
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("The Multiplication of the factors is : %d\n",iRet);

    return 0;
}