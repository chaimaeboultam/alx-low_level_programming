#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp_node;

    /* Check if the key or value is NULL or an empty string */
    if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
        return (0);

    /* Get the index where the key should be stored */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check for collisions, if any, add the new node at the beginning of the list */
    temp_node = ht->array[index];
    while (temp_node != NULL)
    {
        if (strcmp(temp_node->key, key) == 0)
        {
            /* Update the value if the key already exists */
            free(temp_node->value);
            temp_node->value = strdup(value);
            if (temp_node->value == NULL)
                return (0);
            return (1);
        }
        temp_node = temp_node->next;
    }

    /* Create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    /* Duplicate the key and value */
    new_node->key = strdup(key);
    new_node->value = strdup(value);

    /* Check for allocation failure */
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Add the new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
