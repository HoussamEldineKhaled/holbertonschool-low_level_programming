#include "main.h"
/**
 * main - main function
 * @argc: argv size
 * @argv: array output
 * Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
int i = 0;
while (argv[0][i])
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
return (0);
}
