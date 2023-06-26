#include "mian.h"
/**
 * puts2 - print one char out of 2 of a string
 * @str: array of chars
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
