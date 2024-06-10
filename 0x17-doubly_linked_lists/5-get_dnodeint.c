#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to the head of a list
 * @index: index of the node
 * Return: pointer to the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
