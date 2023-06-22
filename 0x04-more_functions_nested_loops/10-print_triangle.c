#include "main.h"
/**
 * print_triangle - print a triangle shape
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, a;

		for (x = 1; x <= size; x++)
		{
			for (a = x; a < size; a++)
			{
				_putchar(' ');
			}

			for (a = 1; a <= x; a++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
