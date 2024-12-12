#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
char m = '0';
while (m <= '9')
{
if(m != '9')
{
putchar(m);
putchar(',');
putchar(' ');
}
else
{
putchar(m);
}
m++;
}
putchar('\n');
return (0);
}
