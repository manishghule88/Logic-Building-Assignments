// 4. Accept number from user and display below pattern.
// Input : 8
// Output : 2   4   6   8   10  12  14  16

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iAdd = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAdd = iAdd + iCnt;
        printf("%d\t",iAdd);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}