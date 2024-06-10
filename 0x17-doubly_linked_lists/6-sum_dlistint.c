#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all data in a linked list
 * @head: pointer to the head of the list
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		/*add value of the current node*/
		sum += head->n;
		/*move to the next node*/
		head = head->next;
		count++;
	}
	if (count == 0)
		return (0);
	return (sum);
}
