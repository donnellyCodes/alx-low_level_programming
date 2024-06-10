#include "lists.h"
/**
 * dlistint_len - returns number of elements in a string
 * @h: pointer to head of the list
 * Return: number of nodes in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/*move to next node*/
		h = h->next;
		/*increment the node count*/
		count++;
	}
	return (count);
}
