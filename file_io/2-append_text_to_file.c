#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * append_text_to_file - appending tect to file
 * @filename: name of file
 * @text_content: text which will be appended
 * Return: -1 or 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
w = write(fd, text_content, len);
if (w < 0 || w != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
