#include "main.h"
#include <stddef.h>
/**
 *_strstr - needle haystack
 * @haystack: big str
 * @needle: small str
 * Return: NULL or needle
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j;
while (needle[i] != '\0')
{
j = 0;
while (haystack[j] != '\0')
{
if (needle[i] == haystack[j])
{
return (haystack + i);
}
j++;
}
i++;
}

return (NULL);
}
