#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main method
 * @argc: size array
 * @argv: array arguments
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int x;
int y;
int mult;
if (argc != 3)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
mult = x *y;
printf("%d\n", mult);
return (0);
}
