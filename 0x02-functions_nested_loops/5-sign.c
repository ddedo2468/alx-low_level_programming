#include "main.h"
/**
 * print_sign - printing thw sign of an integer
 * @i: an integer to check
 * Return: 0 if i is 0 and 1 if i is positive
 * and -1 if n is negative
 */
int print_sign(int i)
{
	if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else if ( i > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
}
		
