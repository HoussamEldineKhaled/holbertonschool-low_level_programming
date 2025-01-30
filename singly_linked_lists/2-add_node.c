#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node
 * @head: head of the linked list
 * @str: string to be added
 * Return: null and newNode
*/

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
if (newNode == NULL)
{
free(newStr);
return (NULL);
}
newNode->str = newStr;
newNode->len = len;
newNode->next = *head;
*head = newNode;
return (newNode);
}
