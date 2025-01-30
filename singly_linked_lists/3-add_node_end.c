#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
  int len = 0;
  list_t *newNode, *temp;
  char *newStr;
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
  if (newNode == NULL)
    {
      free(newNode);
      return (NULL);
    }
  newNode->str = newStr;
  newNode->len = len;
  newNode->next = NULL;
  if (*head == NULL)
    {
      *head = newNode;
    }
  else
    {
      temp = *head;
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = newNode;
    }
  return (newNode);
}
