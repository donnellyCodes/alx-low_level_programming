#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: pointer to key index
 * @size: size of the array in hash table
 * Return: Index of key or value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

