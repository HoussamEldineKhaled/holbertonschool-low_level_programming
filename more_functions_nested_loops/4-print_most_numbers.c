#include "main.h"
/**
 * print_most_numbers - without 2 and 4
*/
void print_most_numbers(void)
{
int i;
i = 0;
while (i < 9)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
i++;
}
 _putchar('\n');
}
