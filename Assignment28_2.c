// 1. Write application which accept file name from user and create that file.

// Input : Demo.txt
// Output: File Created Successfully

#include <stdio.h>
#include <unistd.h>

int main()
{
    char fName[30] = { '\0' };
    int fd = 0;

    printf("Enter the file name : \n");
    scanf("%s",fName);

    fd = creat(fName, 0777);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File Created Successfully\n");
    }

    return 0;
}