// 1. Write a program which accept number from user nad display its digits in reverse order.

// Input : 2395
// Output : 5   9   3   2

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iCnt = 0;
    int iMod = 0;

    if(iNo < 1)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iMod = iNo % 10;
        printf("%d\n",iMod);
        
        iNo = iNo / 10;
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}