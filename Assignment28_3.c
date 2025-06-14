// 3. Write application which accept file name from user and read all data from 
// that file and display content on screen.

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char fName[20] = { '\0' };
    int iRet = 0, fd = 0;
    char Buffer[10] = { '\0' };

    printf("Enter the file name that you want to open : \n");
    scanf("%s",fName);

    fd = open(fName, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            write(1,Buffer,iRet);
        }
    }

    close(fd);

    return 0;
}