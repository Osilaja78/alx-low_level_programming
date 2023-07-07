#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_table - frees a table.
 *
 * @table: table to free.
 * Return: nothing.
 */
void free_table(hash_table_t *table)
{
	unsigned long int i;
	hash_node_t *ht;

	for (i = 0; i < table->size; i++)
	{
		ht = table->array[i];
		if (ht != NULL)
			free_node(ht);
	}
	free(table->array);
	free(table);
}

/**
 * free_node - frees a node.
 *
 * @node: node to free.
 * Return: nothing.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
