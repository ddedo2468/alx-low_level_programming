#include "main.h"
/**
 * print_rev - reverse a string
 * @s: arr of charchcters
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (x--; x >= 0; x--)
		_putchar(s[x]);

	_putchar('\n');
}
