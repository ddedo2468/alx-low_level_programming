#include "main.h"

/**
 * more_numbers - prina all nums 0 to 14 *10
 * followe by new line
 */
int more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}

}

