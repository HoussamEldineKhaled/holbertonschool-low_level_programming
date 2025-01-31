#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * free_dlistint - free linked list
 * @head: head of list
*/

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
{
return;
}
free_dlistint(head->next);
free(head);
}
