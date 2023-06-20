#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	x = 0;

	while (x < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
