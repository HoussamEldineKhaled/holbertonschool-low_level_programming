#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
  int i = 0;
  int length = 0;
  char *strcpy;
  if (str == NULL)
    {
      return (NULL);
    }
  while(str[length] != '\0')
    {
      length++;
    }
  strcpy = malloc((length) * sizeof(char));
  while(i < length)
    {
      strcpy[i] = str[i];
      i++;
    }
  strcpy[length] = '\0';

  return (strcpy);
  
}
