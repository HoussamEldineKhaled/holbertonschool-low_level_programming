#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - print list
 * @h: head of the list
 * Return: length
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t len = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}
