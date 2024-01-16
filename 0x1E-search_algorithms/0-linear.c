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
	if (array == NULL)
		return (-1);
	
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
