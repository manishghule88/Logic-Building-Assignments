// 4. Accept two numbers from user and display first number in second number of times.

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    // if ( iNo < 0)
    // {
    //     iNo = -iNo;
    // }

    for ( int iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter frequency :\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}