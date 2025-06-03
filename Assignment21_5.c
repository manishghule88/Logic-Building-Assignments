/*
4. Accept N numbers from user and display summation of digits of each number. 

Input:  6
    Elements: 8225  665 3   76  953 858

Output: 
    17   17 3   13  17  21
*/

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iMod = 0, iCount = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iMod = Arr[iCnt] % 10;
            Arr[iCnt] = Arr[iCnt] / 10;
            
            iSum = iSum + iMod;
        }
        printf("%d\t",iSum);
    }
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

    Digits(p, iSize);
    
    free(p);

    return 0;
}