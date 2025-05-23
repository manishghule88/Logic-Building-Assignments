// Input : iRow = 3, iCol = 5
// Output:
/*
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
*/
    
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j = 0;
    char ch1 = 'A';
    char ch2 = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch1 = 'A',ch2 = 'a'; j <= iCol; j++,ch1++,ch2++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
            }
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