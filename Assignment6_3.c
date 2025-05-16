// 3. Write a program to find factorial of given number
// Input : 5
// Output : 120


#include <stdio.h>

int factorial( int iNo )
{
    int iCnt = 0;
    int iFact = 1;

    if ( iNo < 1 )
    {
        iNo = -iNo;
    }
    
    for ( iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf( "Enter the Number : \n" );
    scanf( "%d",&iValue );

    iRet = factorial( iValue );
    printf( "The Factors are : %d\n",iRet );
    
    return 0;
}