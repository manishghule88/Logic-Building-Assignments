// 5. Accept division of student from user and depends on the division display
// exam timing. There are 4 divisions in school as A,B,C,D. Exam of division 
// A at 7AM, B at 8:30AM, C at 9:20AM and D at 10:30AM. 

// Input : C
// Output : Your exam at 9:20 AM


#include <stdio.h>
#include <stdbool.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8:30 AM\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9:30 AM\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10:30 AM\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division \n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}