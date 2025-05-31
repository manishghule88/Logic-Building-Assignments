/*
2. Accept N numbers from user check whether that numbers contains 11 in it or not.

Input:  6
    Elements:   85  66  11   80  93  88  

Output: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize);
    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    
    return 0;
}