#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int m = 'z';
while (m >= 'a')
{
putchar(m);
m--;
}
putchar('\n');
return (0);
}

