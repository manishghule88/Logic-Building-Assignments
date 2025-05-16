// 3. WAP to find odd factorial of given number.
// Input : 5
// Output : 8 (4*2)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 1)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iMult = iCnt * iMult;
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

    iRet = OddFactorial(iValue);
    printf("The Odd Factors is : %d\n",iRet);

    return 0;
}