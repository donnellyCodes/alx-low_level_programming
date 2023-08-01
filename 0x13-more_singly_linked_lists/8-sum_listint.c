#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function to return sum of all the data in the list
 * @head: pointer to the head of the list
 * Return: the sum of all the data, or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
