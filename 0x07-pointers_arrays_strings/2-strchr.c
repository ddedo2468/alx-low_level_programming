#include <main.h>
/**
 * _strchr - returns the position of char
 * @c: the char to be looking for
 * @s: the string to be scnned
 * Return: 0 (Sucess)
 */
char* _strchr(char* s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return s;
	}
	s++;
	}

	if (c == '\0')
	{

	return s;
	}

	return NULL;
}
