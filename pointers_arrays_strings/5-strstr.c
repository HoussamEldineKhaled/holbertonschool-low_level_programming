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
if (*needle == '\0')
{
return (haystack);
}
while (haystack[i] != '\0')
{
j = 0;
while (needle[j] != '\0')
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
if (needle[j] == '\0')
{
return (haystack + j);
}
i++;
}

return (NULL);
}
