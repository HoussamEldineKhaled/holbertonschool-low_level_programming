#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
char n = 'A';
char m = 'a';
while (m <= 'z')
{
putchar(m);
m++;
}
while (n <= 'Z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
