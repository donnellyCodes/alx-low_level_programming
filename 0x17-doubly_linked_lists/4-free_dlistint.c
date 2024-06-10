#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer to the head of the list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		/*stores the next node*/
		head = head->next;
		/*free the current node*/
		free(head->prev);
	}
	free(head);
}
