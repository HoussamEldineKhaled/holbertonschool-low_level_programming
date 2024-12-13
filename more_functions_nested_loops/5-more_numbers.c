#include "main.h"
/**
 * more_numbers - number printing
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 15)
{
if(j < 10)
{
_putchar('0' + j);
}
else
{
_putchar('0' + (j / 10));
_putchar('0' + (j % 10));
}
j++;
}
_putchar('\n');
i++;
}
}
