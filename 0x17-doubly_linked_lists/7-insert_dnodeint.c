#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at new position
 * @h: pointer to the head of the list
 * @n: value of the new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		/*insert at the beginning*/
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	dlistint_t *current = *h;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
