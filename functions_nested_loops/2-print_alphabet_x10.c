#include "main.h"
/**
 *print_alphabet_x10 - first nested loop
*/

void print_alphabet_x10(void)
{
int n = 0;
while (n < 10)
{
char m = 'a';
while (m <= 'z')
{
_putchar(m);
m++;
}
_putchar('\n');
n++;
}
}
