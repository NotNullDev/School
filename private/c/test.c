#include <stdio.h>

#include <unistd.h>
#include <sys/syscall.h>
#include <fcntl.h>

#define PERMISSIONS 0666
#define BUFSIZ 1000000

int main(void)
{
    int fd; //file Descriptor
    FILE *fp;
    char fileData[BUFSIZ];
    int currentPosition, i = 0;
    char filePath[] = "/proc/5269/mem";

    fd = open(filePath, O_RDWR, PERMISSIONS);

    while (lseek(fd, currentPosition, 0) != -1)
    {
        read(fd, fileData, 1);
        if (fileData[i] != '\0')
            printf("[%x] ", fileData[i++]);
    }

    return 0;
}