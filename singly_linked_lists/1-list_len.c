#include "lists.h"

/**
 * list_len - list length
 * @h: head of linked list
 * Return: return length
*/
size_t list_len(const list_t *h)
{
int numb = 0;
while (h)
{
numb++;
h = h->next;
}
return (numb);
}
