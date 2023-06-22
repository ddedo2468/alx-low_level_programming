#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: char to test
 * Return: 0 (Sucess)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	else
	{
		return (0);
	}
}
