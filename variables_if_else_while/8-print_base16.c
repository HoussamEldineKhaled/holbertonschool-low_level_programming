#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
char m = '0';
char n = 'a';
while (m <= '9')
{
putchar(m);
m++;
}
while (n <= 'f')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
