// 1. Write application which accept file name from user and open that file 
// in read mode.

// Input : Demo.txt
// Output: File opened Successfully

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    char fName[30] = { '\0' };
    int fd = 0;

    printf("Enter the file name : \n");
    scanf("%s",fName);

    fd = creat(fName, 0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    fd = open(fName, O_RDWR);
    if(fd == -1)
    {

        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is Successfully Opened\n");
    }

    return 0;
}