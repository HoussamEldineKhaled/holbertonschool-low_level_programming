#include "main.h"
/**
 * times_table - multiply
*/
void times_table(void)
{
int x = 0;
int y = 0;
while (x < 10)
{
y = 0;
while (y < 10)
{
int z = x * y;
if (y != 0)
{
_putchar(',');
_putchar(' ');
if (z < 10){
_putchar(' ');
}
}
if (z < 10)
{
_putchar('0' + z);
}
else if (z >= 10)
{
_putchar('0' + (z / 10));
_putchar('0' + (z % 10));
}
y++;
}
_putchar('\n');
x++;
}
}
