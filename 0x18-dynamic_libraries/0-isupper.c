#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: char to test
 * Return: 0 (Sucess)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{

		return (1);
	}
	return (0);
}
