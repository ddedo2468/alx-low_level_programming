#include <stdio.h>
/**
 * main - entry point to the program
 * Description: print sum of even fabi nums.
 * Return: 0 (Success)
 */
int main(void)
{
	int l = 1, m = 2, i = 0;
	int n;

	while (m < 4000000)
	{
		if (m % 2 == 0) m += m;

		n = m;
		m += l;
		l = n;
	}
	printf("%d\n", i);
	return (0);
}
