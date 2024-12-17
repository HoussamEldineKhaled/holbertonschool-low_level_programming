#include "main.h"
/**
 * rev_string - reverse string
 * @s: given string
*/
void rev_string(char *s)
{
int len = 0;
int i;
char *m = "";
while (s[len] != '\0')
{
len++;
}
i = len - 1;
while (i >= 0)
{
m += s[i];
i--;
}
*s = *m;
}
