#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a null terminatering to write to the file
 *
 * Return: 1 is successful and -1 if not successful
 */

int create_file(const char *filename, char *text_content)
{
    int fd, bytes_written;

    if (!filename)
        return -1;
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return -1;
    if (text_content) {
        bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1 || bytes_written != (int)strlen(text_content)) {
            close(fd);
            return -1;
        }
    }
    close(fd);
    return 1;
}
