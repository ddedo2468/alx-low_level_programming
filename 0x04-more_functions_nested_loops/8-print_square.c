#include "main.h"
/**
 * print_square - prints a square
 * follow by \n
 * @size: size of the square
 * If size is 0 or less, the function should print only a new line
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, a;

		for (x = 0; x < size; x++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
