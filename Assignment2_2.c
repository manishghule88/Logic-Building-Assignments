// 1. Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    if ( iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > iCnt)
    {
        printf("*\t");
        iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}