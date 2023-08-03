#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int i;

	diff = n ^ m;
	i = 0;

	while (diff)
	{
		i++;
		diff &= (diff - 1);
	}

	return (i);
}
