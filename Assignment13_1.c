// Input : iRow = 3, iCol = 5
// Output:
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
*/
    
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j = 0;
    char ch1 = 'A';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch1 = 'A'; j <= iCol; j++,ch1++)
        {
            printf("%c\t",ch1);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter Rows and Columns : cls\n");
    scanf("%d %d",&iValue1, &iValue2);

    Display(iValue1, iValue2);

    return 0;
}