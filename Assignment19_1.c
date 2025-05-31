/*
1. Accept N numbers from user and return frequency of even numbers.

Input:  6
    Elements:   85  66  3   80  93  88

Output: 3
*/

#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iRet = 0, iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);
    printf("Result is %d\n",iRet);
    
    return 0;
}