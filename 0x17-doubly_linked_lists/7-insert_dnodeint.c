#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at new position
 * @h: pointer to the head of the list
 * @idx: index
 * @n: value of the new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int count = 0;

	if (idx == NULL)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	current *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new_node->n = n;

	while (current != NULL && idx > 0)
	{
		if (count == idx - 1)
		{
			new_node->prev = current;
			if (current->next != NULL)
			{
				new_node->next = current->next;
				current->next->prev = new_node;
			}
			else
				new_node->next = NULL;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
