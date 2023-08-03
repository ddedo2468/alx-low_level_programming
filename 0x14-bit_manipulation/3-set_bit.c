#include "main.h"

/**
 * set_bit - change value of a bit to 1
 * @n: decimal number
 * @index: index position
 * Return: 1 Sucess, -1 Erro
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ptr;

	if (index > 64)
		return (-1);

	for (ptr = 1; index > 0; index--, ptr *= 2)
		;
	*n += ptr;

	return (1);
}
