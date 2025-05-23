#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i,j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == j) || (i < j) || (i > j))
            {
                printf(" \t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Display(iValue1, iValue2);

    return 0;
}