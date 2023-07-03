#include "main.h"
#include <stddef.h>
#include <stdio.h>
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
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
