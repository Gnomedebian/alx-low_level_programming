#include "hash_tables.h"

/**
 * key_index - Get [] for key given
 * @key: key str to H
 * @size: HT size
 *
 * Return: [] of key using djb2
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
