// 2. Accept amount in US dollar and return its corresponding value in indian currency

#include <stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;

    INR = iNo * 70;
    return INR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("The Dollar to INR is : %d\n",iRet);
    
    return 0;
}