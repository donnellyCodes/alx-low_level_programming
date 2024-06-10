#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: points to the prev and next node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*initialize the node count */
	size_t count = 0;

	while (h != NULL)
	{
		/*print value of current node*/
		printf("%d\n", h->n);
		/*move to the next node*/
		h = h->next;
		/*increment the node count*/
		count++;
	}
	return (count);
}
