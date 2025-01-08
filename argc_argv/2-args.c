#include "main.h"
/**
 * main - main method
 * @argc: size
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i = 1;
int j = 0;
while (i < argc)
{
j = 0;
while(argv[i][j] != '\0')
{
_putchar(argv[i][j]);
j++;
}
_putchar('\n');
i++;
}
return (0);
}
