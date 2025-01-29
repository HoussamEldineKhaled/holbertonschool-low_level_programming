#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print length of a linked list
 * @h: head of inked list
 * Return: length
*/

size_t print_list(const list_t *h)
{
size_t numb = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
numb++;
h = h->next;
}
return (numb);
}
