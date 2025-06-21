// 1.Write a program which accept string from user and copy the contents of that string
// into anther string

#include <stdio.h>
#include <string.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    strcpy(src, dest);
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    strCpyX(arr,brr);

    printf("%d",brr);

    return 0;
}