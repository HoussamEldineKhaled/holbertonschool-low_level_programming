#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *newNode;

  newNode = malloc(sizeof(dlistint_t));

  if (newNode == NULL)
    {
      free(newNode);
      return (NULL);
    }
  newNode->n = n;
  newNode->next = *head;
  newNode->prev = NULL;
  if (head != NULL)
    {
  (*head)->prev = newNode;
    }
  *head = newNode;
  return (newNode);
}
