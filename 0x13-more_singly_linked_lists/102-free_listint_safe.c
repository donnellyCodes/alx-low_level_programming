#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - function that frees a linked list safely
 * @h: pointer to a pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;
	int i;

	while (current)
	{
		i = current - current->next;
		if (i > 0)
		{
			next = current->next;
			free(current);
			current = next;
			count++;
		}
		else
		{
			free(current);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
