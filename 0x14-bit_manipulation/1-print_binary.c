#include "main.h"

/**
 * print_binary - func that print binary of a number
 * @n: decimal number
 * Return: bin number
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shft;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shft = 0; (tmp >>= 1) > 0; shft++)
		;

	for (; shft >= 0; shft--)
	{
		if ((n >> shft) & 1)
			printf("1");
		else
			printf("0");
	}
}
