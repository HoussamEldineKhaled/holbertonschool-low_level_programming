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
while (i < index)
{
head = head->next;
i++;
}
return (head);
}
