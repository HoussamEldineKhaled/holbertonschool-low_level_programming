#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

/**
 * main - main method
 * @argc: number of args
 * @argv: file name
 * Return: 0
*/

int main (int argc, char *argv[])
{
int file_to, file_from;
ssize_t byte_read, byte_written;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}
while ((byte_read = read(file_from, buffer, 1024)) > 0)
{
byte_written = write(file_to, buffer, byte_read);
if (byte_written != byte_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
close(file_to);
exit(99);
}
}
if (byte_read < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(file_from);
close(file_to);
exit(98);
}    
if (close(file_from) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
exit(100);
}
if (close(file_to) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
exit(100);
}
return (0);
}
