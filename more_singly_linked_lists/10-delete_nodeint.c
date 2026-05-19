#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete (starts at 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *temp;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
return (1);
}

current = *head;
i = 0;
while (current->next != NULL)
{
if (i == index - 1)
{
temp = current->next->next;
free(current->next);
current->next = temp;
return (1);
}
i++;
current = current->next;
}

return (-1);
}
