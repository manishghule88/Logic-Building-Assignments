// 1. Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3, iCol = 4
// Output : 
// 
// *    #   *   #
// *    #   *   #
// *    #   *   #
// *    #   *   #

#include <stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            if((j % 2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}