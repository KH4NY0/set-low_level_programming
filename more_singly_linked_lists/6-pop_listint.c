#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node and returns its data
 * @head: pointer to pointer to the head of the list
 *
 * Return: head node's n value, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int val;

if (*head == NULL)
return (0);

val = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (val);
}
