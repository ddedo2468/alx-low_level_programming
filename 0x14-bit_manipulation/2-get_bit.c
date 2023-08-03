#include "main.h"
/**
  * get_bit - gets the val of a bit at a exact index
  * @n: bin number
  * @index: the given index
  * Return: bit value.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int reqbit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	reqbit = (n >> index) & 1;

	return (reqbit);
}
