#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node = NULL;
    unsigned long int i;
    char *spliter = "";

    if (!ht || !ht->array)
		return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = (ht->array)[i];
        while (node != NULL)
        {
            printf("%s '%s' : '%s'", spliter, node->key, node->value);
            spliter = ",";
            node = node->next;
        }
    }
    printf("}\n");
}
