// 3. Write a program which accept distance in kilometer and convert it into meter.
// consider value of 1km = 1000meter

#include <stdio.h>

int KmtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue1, iRet = 0;
    
    printf("Enter the distance : \n");
    scanf("%d",&iValue1);

    iRet = KmtoMeter(iValue1);
    printf("The Kilometer to meter is : %d\n",iRet);

    return 0; 
}