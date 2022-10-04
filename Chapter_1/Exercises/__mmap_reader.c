#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/io.h>
#include <sys/mman.h>
int main(int argc, char **argv)
{
    unsigned char *f;
    int size;
    struct stat s;
    char * file_name = argv[1];
    int fd = open (argv[1], O_RDONLY);
    int status = fstat (fd, & s);
    size = s.st_size;
    f = (char*)mmap (0, size, PROT_READ, MAP_PRIVATE, fd, 0);
    puts(f);
    return 0;
}
