#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: pointer to nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
