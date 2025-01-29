#include "lists.h"
#include <stdlib.h>
#include <string.h>
list_t *add_node(list_t **head, const char *str)
{
  list_t *newNode;
  char *newStr;
  int len = 0;


  if (str == NULL)
    {
      return (NULL);
    }

  newStr = strdup(str);
  if (newStr == NULL)
    {
      return (NULL);
    }
  while (str[len])
    {
      len++;
    }
  newNode = malloc(sizeof(list_t));
  
}
