#include "lists.h"
#include <stddef.h>
#include <stdlib.h>



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t newNode;

  newNode = malloc(sizeof(dlistint_t));

  if (newNode == NULL)
    {
      return (NULL);
    }

  newNode->n = n;
  
  return (newNode);
}
