// WAP Which accept number from user and display its table on screen.

#include <stdio.h>

void Table( int iNo )
{
    int iCnt = 0;
    int iMulti = 1;

    if ( iNo < 1 )
    {
        iNo = -iNo;
    }
    
    for ( iCnt = 1; iCnt <= 10; iCnt++ )
    {
        iMulti = iCnt * iNo;
        printf( "%d\t", iMulti );
    }
}

int main()
{
    int iValue = 0;

    printf( "Enter the Number : \n" );
    scanf( "%d",&iValue );

    Table( iValue );
    
    return 0;
}