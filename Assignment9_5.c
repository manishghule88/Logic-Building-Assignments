// 5. WAP which accept number from user and count frequency of such a digits which
// are less than 6

// Input : 2395
// Output : 3

#include <stdio.h>

int CountSix(int iNo)
{
    int iCnt = 0;
    int iMod = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        if(6 > iMod)
        {
            iCount++;
        }
        iNo = iNo / 10;
        iCnt++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountSix(iValue);
    printf("The frequency of 6 is : %d\n",iRet);

    return 0;
}

