#include "hash_tables.h"

/**
 * hash_table_set - sets a hash table value
 * @ht: a pointer to the hash table
 * @key: is the key to be inserted at
 * @value: is the value to be inserted
 * Return: 1 if successfull and 0 if failed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	hash_node_t *temp;
	unsigned long int numkey;
	char *value_copy;

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL || new == NULL)
	{
		free(value_copy);
		return (0);
	}

	numkey = key_index((const unsigned char *)key, ht->size);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	if (ht->array[numkey] == NULL)
	{
		ht->array[numkey] = new;
	}
	else if (strcmp(ht->array[numkey]->key, key) == 0)
	{
		free(ht->array[numkey]->value);
		ht->array[numkey]->value = strdup(value);
	}

	else
	{
		temp = ht->array[numkey];
		new->next = temp;
	}
	return (1);
}
