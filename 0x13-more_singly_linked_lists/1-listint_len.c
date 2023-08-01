#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - function to return number of elements is the list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
