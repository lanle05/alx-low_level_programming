#include "main.h"
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content) {
    if (!filename) {
        return -1;
    }

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        return -1;
    }

    if (!text_content) {
        close(fd);
        return 1;
    }

    ssize_t written = write(fd, text_content, strlen(text_content));
    close(fd);

    if (written == -1 || written != strlen(text_content)) {
        return -1;
    }

    return 1;
}

