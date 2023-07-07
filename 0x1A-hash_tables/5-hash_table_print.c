#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: table top be printed
 *
 * Return: nothig.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	size_t count;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	count = 0;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			count++;
		}
	}
	printf("}\n");
}
