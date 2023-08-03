#include "main.h"

/**
  * clear_bit - change bit to 0
  * @n: ptr value adree will be turned to 0
  * @index: index of the bit.
  * Return: 1 Sucess, -1 Error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n & (~(1UL << index));
	return (1);
}
