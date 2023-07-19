#include "function_pointers.h"
/**
 * int_index - Function that looks for an integer
 * @array: arr of ints
 * @size: size of arr
 * @cmp: function ptr
 * Return: the index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
