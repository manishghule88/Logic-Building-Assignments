// Input : iRow = 4, iCol = 5
// Output:
/*
    4   4   4   4   4
    3   3   3   3   3
    2   2   2   2   2
    1   1   1   1   1
*/
    
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j, iDuplicate = 0;

    for(i = iRow; i > 1; i--)
    {
        for(j = iCol; j > 1; j--)
        {
            printf("%d\t",j);
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