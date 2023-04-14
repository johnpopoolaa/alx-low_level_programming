#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found or if
 * array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    int step = sqrt(size);
    int prev = 0;
    int idx = 0;
    int i;

    if (array == NULL)
        return (-1);

    while (idx < (int)size && array[idx] < value)
    {
        printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
        prev = idx;
        idx += step;

        if (idx >= (int)size)
            break;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, idx);

    for (i = prev; i <= fmin(idx, (int)size - 1); i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
