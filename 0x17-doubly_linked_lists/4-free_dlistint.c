#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer to the head of the list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	dlistint_t *next;

	current = head;
	while (current != NULL)
	{
		/*stores the next node*/
		next = current->next;
		/*free the current node*/
		free (current);
		/*move to the next node*/
		current = next;
	}
}
