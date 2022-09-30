#include "main.h"

/**
 * _isupper - Tells if an alphabet is uppercase
 * or not
 *
 * @c: Alphabet to be checked
 *
 * Return: 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
