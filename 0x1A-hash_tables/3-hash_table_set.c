#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - add an element to the hash table (ht)
 *
 * @ht: hash table to be populated
 * @key: key of the array index in the hash table
 * @value: value to be assigned to the key
 *
 * Return: 1 on success; 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size;
	unsigned long int index;

	hash_node_t *val __attribute__((unused));
	hash_node_t *temp __attribute__((unused));

	size = get_table_size(ht);
	index = key_index((unsigned char *) key, size);

	if (ht == NULL || key == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);

		ht->array[index]->key = malloc(sizeof(char) * strlen(key));
		ht->array[index]->value = malloc(sizeof(char) * strlen(value));
		strcpy(ht->array[index]->key, key);
		strcpy(ht->array[index]->value, value);
		ht->array[index]->next = NULL;
	}
	else
	{
		val = malloc(sizeof(hash_node_t));
		if (val == NULL)
			return (0);

		val->key = malloc(sizeof(char) * strlen(key));
		val->value = malloc(sizeof(char) * strlen(value));
		strcpy(val->key, key);
		strcpy(val->value, value);
		val->next = ht->array[index];
		ht->array[index] = val;
	}

	return (1);
}

/**
 * get_table_size - dynamically get the size of the hash table
 *
 * @ht: hash table
 *
 * Return: size of the hash table
 */

unsigned long int get_table_size(hash_table_t *ht)
{
	(void) ht;
	return (1024);
}
