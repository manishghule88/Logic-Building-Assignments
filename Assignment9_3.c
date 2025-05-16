// 3. WAP which accept number from user and count frequency of 2 in it.

#include <stdio.h>

int CountTwo(int iNo)
{
    int iMod = 0;
    int iCnt = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iMod = iNo % 10;
        if(iMod == 2)
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

    iRet = CountTwo(iValue);
    printf("The Count is : %d\n",iRet);
    return 0;
}