// 4. Write a program which accept temperature in Fahrenheit and convert it into celsius.
// consider (1 celsius = (Fahrenheit - 32) * (5/9))

// Input : 10
// Output : -12.2222 (10 - 32) * (5/9)

#include <stdio.h>

double FhtoCs(int iTemp)
{
    int Celsius = iTemp - 32;
    int iRet = Celsius * 0.55;
    
    return Celsius;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%d",&iValue);

    dRet = FhtoCs(iValue);
    printf("Converted the Dahrenheit : %lf\n",dRet);

    return 0;
}