#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - print length
 * @h: head of the list
 * Return: length
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
while (h)
{
h = h->next;
len++;
}
return (len);
}
