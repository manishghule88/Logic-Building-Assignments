// 1. Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :
/*
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0, iSum = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((j % 2) != 0)
            {
                iSum = iSum * 2;
                printf("%d\t",iSum);
            }
            else
            {
                printf("%d\t",iSum);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns : \n");
    scanf("%d %d",&iValue1,iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}