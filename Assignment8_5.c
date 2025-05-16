// 5. WAP which accept area in square feet and convert it into square meter.
// (1 square feet = 0.0929 Square meter)

#include <stdio.h>

double SquareMeter(int iNo)
{
    double dRet = 0.0;
    dRet = iNo * 0.0929;

    return dRet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("The Square Meter is : %lf\n",dRet);
    
    return 0;
}