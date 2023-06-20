#include "main.h"
/**
 * print_last_digit - prints the last dig of a num
 * Descrition: takes a number and git you the last digit
 * @n: a number to use in function
 * Return: value of the digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = i -i;
		i = i % 10;
	}
	
	return (i);
}
