// 4. Accept one number and check whether is divisible by 5 or not

#include<stdio.h>

// typedef int BOOL;
#define TRUE 1
// #define FALSE 0

void Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bREt false;

    printf("Enter the number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE )
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}