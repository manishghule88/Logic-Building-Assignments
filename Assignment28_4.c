// 4. Write application which accept file name from user and display size of file.

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0, iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);       
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);
        
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                iCount++;
            }
        }
        
        printf("File size is : %d bytes\n",iCount);

        close(fd);
    }

    return 0;
}