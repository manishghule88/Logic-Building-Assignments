// 1. Write a program which accept radius of circle from user and calculate its area
// consider value of PI as 3.14 (Area = PI * Radius * Radius)

#include <stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0;
    Area = (PI * fRadius * fRadius);

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The Radius of Circle is : %lf\n",dRet);

    return 0; 
}