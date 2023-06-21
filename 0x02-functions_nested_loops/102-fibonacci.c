#include <stdio.h>
/**
 * main - entry pint to the program
 * Description: print first 50 fibonacci nums.
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 2;
	long int l = 1, m = 2, n;

	printf("%lu, ", l);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu\n", m);
		}
		else
		{
			printf("%lu, ", m);
		}

	n = m;
	m += l;
	l = n;
	i++;
	}
	return (0);
}
