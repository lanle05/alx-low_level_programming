#include "main.h"
#include <fcntl.h>
#include <unistd.h>

int append_text_to_file(const char *filename, char *text_content)
{
  int fd;

  if (!filename) {
    return -1;
  }

  if (!text_content) {
    return 1;
  }

  fd = open(filename, O_WRONLY | O_APPEND);
  if (fd == -1) {
    return -1;
  }

  ssize_t written = write(fd, text_content, strlen(text_content));
  if (written == -1 || written != strlen(text_content)) {
    close(fd);
    return -1;
  }

  close(fd);
  return 1;
}




