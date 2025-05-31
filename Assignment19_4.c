/*
2. Accept N numbers from user .and return frequency of 11 form it

Input:  6
    Elements:   85  66  11   80  93  88  

Output: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    iRet = Frequency(p, iSize);
    printf("%d",iRet);

    free(p);
    
    return 0;
}