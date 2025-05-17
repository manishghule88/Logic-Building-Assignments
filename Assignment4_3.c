// 1. Write a program which accept number from user and display its factors in decreasing order.
// Input : 12
// Output : 6   4   3   2   1

#include <stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);
   
    return 0;
}