#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: an array list
 * @size: the size of the array
 * @value: target to search for.
 * Return: 0 (Success).
 */

int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
