#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with the key
 * @ht: pointe to the hash table
 * @key: pointer to the key
 * Return: value of the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	for (current_node = ht->array[idx];
			current_node && strcmp(current_node->key, key) != 0;
			current_node = current_node->next)
		;
	if (current_node == NULL)
		return (NULL);
	return (current_node->value);
}
