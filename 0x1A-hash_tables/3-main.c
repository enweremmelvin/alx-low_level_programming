#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int retval;
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");

	retval = key_index((unsigned char *)"betty", 1024);
	printf("BETTY key index: %u\n", retval);
	printf("Key: %s - Value: %s\n", ht->array[retval]->key, ht->array[retval]->value);


	hash_table_set(ht, "hetairas", "cool");

	retval = key_index((unsigned char *)"hetairas", 1024);
	printf("HETAIRAS key index: %u\n", retval);
	printf("Key: %s - Value: %s\n", ht->array[retval]->key, ht->array[retval]->value);


	hash_table_set(ht, "mentioner", "cool");

	retval = key_index((unsigned char *)"mentioner", 1024);
	printf("MENTIONER key index: %u\n", retval);
	printf("Key: %s - Value: %s\n", ht->array[retval]->next->key, ht->array[retval]->next->value);

	return (EXIT_SUCCESS);
}
