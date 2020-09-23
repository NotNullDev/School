#include <sys/syscall.h>
#include <unistd.h>
#include <fcntl.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PERMISSIONS 0666

int main(void)
{
    //file descriptor : 0 || 1 || 2 (in / )
    int fd;
    char *fileName, *procName;
    char buffer[BUFSIZ];
    int readResult;

    fileName = "/proc/5269/status";
    fd = open(fileName, O_RDWR, PERMISSIONS);

    if (fd == -1)
    {
        fprintf(stderr, "Error: can't open file %s.\n", fileName);
        exit(EXIT_FAILURE);
    }
    else
        printf("File %s opened with file descriptor : %d.\n", fileName, fd);

    readResult = read(fd, buffer, BUFSIZ);
    if (readResult == -1)
    {
        fprintf(stderr, "Error in reading bytes from file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Read sucess. Bites readed: %d.\n", readResult);
    return 0;
}