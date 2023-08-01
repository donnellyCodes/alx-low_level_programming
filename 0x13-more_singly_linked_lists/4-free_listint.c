#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees the list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
