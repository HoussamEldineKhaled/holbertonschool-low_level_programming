#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - summation of list
 * @head: head of list
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
