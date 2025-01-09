#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - mian method
 * @argc: number
 * @argv: array command
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int i = 1;
int j = 0;
int sum = 0;
while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
