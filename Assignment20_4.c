/*
4. Accept N numbers from user and accept range, Display all elements from that 
range

Input : 6
    Start: 60
    End: 90

    Elements: 85    66  3   76  93  88
    
Output: 66  76  88
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
        }
    }

    if(bFlag == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the Starting point \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point \n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue1,iValue2);
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
}