#include "main.h"
/**
 * tines_table - prints the time table to 9
 * Description: printing all times table from 0 to 9
 */
void times_tables(void)
{
	int k, l, m;

	for (k = 0; k <= 9; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			m = k*l;

			if (l == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}

			if (m < 10)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
