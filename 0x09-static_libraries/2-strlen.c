#include "main.h"

/**
 * _strlen - this returns the lenght of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
