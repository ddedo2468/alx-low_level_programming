#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long int i;
	long int k;
	long int j;

	i = 612852475143;
	k = -1;

	while (i % 2 == 0)
	{
		k = 2;
		i /= 2;
	}

	for (j = 3; j <= sqrt(i); j = j + 2)
	{
		while (i % j == 0)
		{
			k = j;
			i = i / j;
		}
	}

	if (i > 2)
		k = i;

	printf("%ld\n", k);

	return (0);
}
