// 4. Write a program which accept string from user and copy small characters
// of that string into another string.

// Input: "Marvellous Multi OS"
// Output: "arvellous multi"

#include <stdio.h>
#include <string.h>

void strNCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30];

    printf("Enter the string from user : \n");
    scanf("%[^'\n']s",arr);

    strNCpyX(arr, brr);
    printf("The small letter is: %s\n", brr);

    return 0;
}