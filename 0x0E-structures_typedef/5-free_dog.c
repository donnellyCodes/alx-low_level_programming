#include "dog.h"
/**
 * free_dog - frees a variable of type struct dog
 * @d: pointer to struct dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
