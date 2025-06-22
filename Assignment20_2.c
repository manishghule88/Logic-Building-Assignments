// 2. Accept N numbers from user and accept one another number as NO, return index
// of first occurrence of that NO

// Input N: 6
//       No: 66
// Element: 85  66  3   66  96  88

// Output:  1


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCount = 0;
    bool bRet = false;

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    iCount++;

    return iCount;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0;  
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr ==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FirstOcc(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
        printf("First occurrence of number is %d\n",iRet);
    }

    return 0;
}