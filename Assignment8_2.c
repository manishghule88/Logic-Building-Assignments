// 2. Write a program which accept width and height of rectangle from user and calculate its area
// consider value of PI as 3.14 (Area = Width * Height)

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float PI = 3.14;
    double Area = 0.0;
    Area = (fWidth * fHeight);

    return Area;
}

int main()
{
    float fWidth = 0.0f;
    float fHeight = 0.0f;
    double dRet = 0.0;

    printf("Enter the Width : \n");
    scanf("%f",&fWidth);

    printf("Enter the Height : \n");
    scanf("%f",&fHeight);

    dRet = RectArea(fWidth, fHeight);
    printf("The Rectangle of Area is : %lf\n",dRet);

    return 0; 
}