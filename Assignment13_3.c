// Input : iRow = 3, iCol = 5
// Output:
/*
    A   A   A   A   A
    B   B   B   B   B
    C   C   C   C   C
*/
    
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j = 0;
    char ch = 'A';

    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
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