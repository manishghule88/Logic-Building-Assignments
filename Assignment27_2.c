// 2. Write a program which accept string from user and copy the contents of that
// string into another string.

// Input : "Marvellous Multi OS"
//          10
// Output:  "Marvellous"

#include <stdio.h>
#include <string.h>

void strNCpyX(char *src, char *dest, int iCnt)
{
    char *start = dest;
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
    }
    *dest = '\0';
    printf("destination is : %s",start);
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30];

    printf("Enter the string from user : \n");
    scanf("%s",arr);

    strNCpyX(arr, brr, 10);

    return 0;
}