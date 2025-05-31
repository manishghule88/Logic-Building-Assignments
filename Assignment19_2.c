/*
2. Accept N numbers from user and return difference between frequency of even number and odd numbers.

Input:  6
    Elements:   85  66  3   80  93  88  90

Output: 1
*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iRet = 0, iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }else 
        {
            iCountOdd++;
        }
    }
    iRet = iCountEven - iCountOdd;
    return iRet;
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

    iRet = Frequency(p, iSize);
    printf("Result is %d\n",iRet);
    
    return 0;
}