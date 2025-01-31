#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add node to the end
 * @head: head node
 * @n: number
 * Return: newNode or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode, *temp;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
free(newNode);
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;
temp = *head;
if (temp == NULL)
{
*head = newNode;
return (newNode);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
newNode->prev = temp;
return (newNode);
}
