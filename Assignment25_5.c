// 4. Write a program which accept string from user and count number of white spaces
// Input : marve89llous Infosystems
// Output : 1

#include <stdio.h>

int countWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s", arr);

    iRet = countWhite(arr);
    printf("The Number of white spaces are : %d\n",iRet);
    
    return 0;
}