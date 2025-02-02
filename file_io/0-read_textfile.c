#include "main.h"
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  int i, y;
  char *buf;
  if (filename == NULL)
    {
      return (0);
    }
  fd = open(filename, O_RDONLY);
  if (fd < 0)
    {
      return (0);
    }
  buf = malloc(sizeof(char) * letters);
  if (buf == NULL)
    {
      return (0);
    }
  i = read(fd, buf, letters);
  if (i < 0)
    {
      free(buf);
      close(fd);
      return (0);
    }
  y = write(STDOUT_FILENO, buf, i);
  free(buf);
  close(fd);
  return (y);
}
