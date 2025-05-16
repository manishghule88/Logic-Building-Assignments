// 2. WAP which accept number from user and check whether it contains 0 in it or not.

#include <stdio.h>
#include <stdbool.h>

bool ChkZero(int iNo)
{
    int iCnt = 0;
    int iMod = 0;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        printf( "The mod is : %d\n",iMod );
        iNo = iNo / 10;
        printf( "The remaining number : %d\n",iNo );
        iCnt++;
        if (iMod == 0)
        {
            return true;
        }
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Numbr : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if (bRet == true)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}