/// 4. Accept one character from user and convert case of that character.
/// Input : a   Output : A
/// Input : D   Output : d

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue - 32)
    {
        printf("%c",cValue);
    }
    else if(cValue + 32);
    {
        printf("%c",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}