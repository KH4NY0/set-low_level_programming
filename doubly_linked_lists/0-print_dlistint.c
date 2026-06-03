#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
lists.h size_t count = 0;

lists.h while (h != NULL)
lists.h {
lists.h lists.h printf("%d\n", h->n);
lists.h lists.h count++;
lists.h lists.h h = h->next;
lists.h }
lists.h return (count);
}
