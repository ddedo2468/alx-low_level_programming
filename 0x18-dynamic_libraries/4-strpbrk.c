#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - earches a string for any of a set of bytes.
 * @s: string to check
 * @accept: accepted byets
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			return (&s[i]);
		}
	}

	return (NULL);
}
