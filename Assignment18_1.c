// 1. Accept N number from user and return difference between summation of even elements
// and summation of odd elements.
/*
    Input: 6
        Elements: 85    66  3   80  93  88
*/

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0, iOddSum = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = Arr[iCnt] + iEvenSum;
        }
        else
        {
            iOddSum = Arr[iCnt] + iOddSum;
        }

        iDiff = iEvenSum - iOddSum;
    }
    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d\n",iRet);

    return 0;
}