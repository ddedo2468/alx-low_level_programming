#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: Int to use for check
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
