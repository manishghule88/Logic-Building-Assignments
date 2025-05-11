/// 5. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is VOWEL\n");
    }
    else
    {
        printf("It is not VOWEL\n");
    }

    return 0;
}