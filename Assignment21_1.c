/*
1. Accept N numbers from user and return the largest number.

Input:  6
    Element:    85  66  3   66  93  88
Output: 93
*/

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt] + 1)
        {
            printf("%d",Arr[iCnt]);
        }
    }
    return 0;
}
int main()
{
    int iSize = 0, iCnt = 0;
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

    Maximum(p, iSize);

    free(p);

    return 0;
}