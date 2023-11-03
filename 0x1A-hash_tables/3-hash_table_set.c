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
    hash_node_t* new = malloc(sizeof(hash_node_t));
    unsigned long int numkey;
    char *value_copy;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

    if (new == NULL)
        return 0;
    
    value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
    
    numkey = key_index((const unsigned char *)key, ht->size);
    new->value = value;
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return 0;
    }
    new->next = NULL;

    if (ht->array[numkey] == NULL)
    {
        ht->array[numkey] = new;
    }
    else
    {
        hash_node_t *tmp = ht;

        while (tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
    return 1;
}