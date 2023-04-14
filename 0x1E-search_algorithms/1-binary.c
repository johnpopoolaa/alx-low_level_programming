#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, n, m;

	if (array == NULL)
		return (-1);

	for (n = 0, m = size - 1; m >= n;)
	{
		printf("Searching in array: ");
		for (i = n; i < m; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = n + (m - n) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			m = i - 1;
		else
			n = i + 1;
	}
	return (-1);
}
