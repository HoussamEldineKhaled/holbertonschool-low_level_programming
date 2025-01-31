#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - get the node at index
 * @head: head of linked list
 * @index: index of node
 * Return: head at index i
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
unsigned int len = 0;
while (head->next != NULL)
{
len++;
}
if (index > len)
{
  return (NULL);
}
while (i < index)
{
head = head->next;
i++;
}
return (head);
}
