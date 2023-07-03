#include "main.h"
/**
 * _strstr - return pointer to @needle location in @haystack
 * @haystack: the place where we will search for @needle
 * @needle: the value we want to alocate
 * Return: pointer to @needle in @haystack
 * if @needle note in @haystack return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
		if (needle[0] == haystack[i])
		{
			for (j = 0; needle[j] != '\0'; j++)
				if (needle[j] != haystack[i + j])
					break;

			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	return ('\0');
}
