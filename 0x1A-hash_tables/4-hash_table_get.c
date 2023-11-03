#include "hash_tables.h"
/**
 * hash_table_get - gets a value of an index
 * from a hash table
 * @ht: pointer to the hash table
 * @key: key to the item to be retrieved
 * Return: value given to the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int numkey;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	numkey = key_index((const unsigned char *)key, ht->size);
	if (ht->array[numkey] == NULL)
		return (NULL);

	else
		return (ht->array[numkey]->value);
}
