#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: pointer to the square matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_d = 0, sum_xd = 0;

	for (i = 0; i < size; i++)
	{
		sum_d += a[i * size + i];
		sum_xd += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_d, sum_xd);
}
