#include <stdio.h>
#include "main.h"
/**
  * *string_toupper - all lower case to uppercase in a string
  * @str: string to be checked for lowercase char
  * Return: string
  */
char *string_toupper(char *str)
{
	int element;

	for (element = 0 ; str[element] != '\0' ; element++)
	{
		if (str[element] >= 'a' && str[element] <= 'z')
		{
			str[element] = str[element] - 32;
		}
	}

	return (str);
}
