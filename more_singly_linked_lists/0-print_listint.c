#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
lists.h size_t count;

lists.h count = 0;
lists.h while (h != NULL)
lists.h {
lists.h lists.h printf("%d\n", h->n);
lists.h lists.h count++;
lists.h lists.h h = h->next;
lists.h }

lists.h return (count);
}
