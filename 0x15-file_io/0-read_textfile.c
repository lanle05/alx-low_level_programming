#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t read_count, write_count;
  char *buffer;

  if (!filename) {
    return 0;
  }

  fd = open(filename, O_RDONLY);
  if (fd == -1) {
    return 0;
  }

  buffer = malloc(letters);
  if (!buffer) {
    close(fd);
    return 0;
  }

  read_count = read(fd, buffer, letters);
  if (read_count == -1) {
    free(buffer);
    close(fd);
    return 0;
  }

  write_count = write(STDOUT_FILENO, buffer, read_count);
  free(buffer);
  close(fd);

  if (write_count != read_count) {
    return 0;
  }

  return read_count;
}
