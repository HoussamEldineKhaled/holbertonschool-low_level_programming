#include "main.h"
/**
 * rev_string - reverse string
 * @s: given string
*/
void rev_string(char *s)
{
int len = 0;
int i;
char *first, *last, temp;
while (s[len] != '\0')
{
len++;
}
i = 0;
first = s;
last = s + len - 1;
while (i < len / 2)
{
temp = *last;
*last = *first;
*first = temp;
first++;
last--;
i++;
}
}
