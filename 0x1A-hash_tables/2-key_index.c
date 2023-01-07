#include "hash_tables.h"

/**
 * key_index - Gets the index a key/value pair is stored in the array of a 
 * hash table
 * @key: key to search
 * @size: size of array
 * Return: array index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (key % size);
}
