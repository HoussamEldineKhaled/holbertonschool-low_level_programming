#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - add node to the list
 * @head: head of list
 * @n: number
 * Return: newnode or null
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
if (*head != NULL)
{
(*head)->prev = newNode;
}
*head = newNode;
return (newNode);
}
