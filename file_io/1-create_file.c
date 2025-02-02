#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * create_file - create a new file
 * @filename: name of file
 * @text_content: content of file
 * Return: -1 and 1
*/

int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDONLY | O_WRONLY | O_TRUNC, 0600);
if (fd < 0)
{
  perror("open");
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
w = write(fd, text_content, len);
if (w < 0)
{
perror("write");
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
