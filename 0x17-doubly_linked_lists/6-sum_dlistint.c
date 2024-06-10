#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all data in a linked list
 * @head: pointer to the head of the list
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/*add value of the current node*/
		sum += head->n;
		/*move to the next node*/
		head = head->next;
	}
	return (sum);
}
