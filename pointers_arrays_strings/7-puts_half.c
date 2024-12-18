#include "main.h"
/**
 * puts_half - half of str
 * @str: input str
*/
void puts_half(char *str)
{
int len = 0, i;
while (str[len] != '\0')
{
len++;
}
if (len % 2 != 0)
{
i = (len - 1) / 2;
}
else if (len % 2 == 0)
{
i = (len) / 2 + 1;
}
while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
