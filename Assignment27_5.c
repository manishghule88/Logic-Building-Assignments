// 5. Write a program which 2 strings from user and concat second string from 
// first string.

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;

        printf("The srcing is %s",src);
    }
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;
}