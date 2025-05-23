// Input : iRow = 3, iCol = 4
// Output:
/*
    1   2   3   4
    5   6   7   8
    9   10  11  12
*/
    
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j, iCnt = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            iCnt++;
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter Rows and Columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Display(iValue1, iValue2);

    return 0;
}