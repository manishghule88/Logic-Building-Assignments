/*
5. Accept N numbers from user and return product of all odd elements
Input:  6
    Elements:   15  66  3   70  10  88
Output: 45
*/

#include <stdio.h>
#include <stdlib.h>

int product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum * Arr[iCnt];
        }   
    }
    return iSum;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = product(p,iSize);
    printf("Product is : %d\n",iRet);

    free(p);

    return 0;
}