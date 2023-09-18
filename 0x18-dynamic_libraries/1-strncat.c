#include "main.h"
/**
 * _strncat - return a concatenated string
 * @dest: the original str
 * @src: str to add on top of @dest
 * @n: num of cahrs to add from @src
 * Return: the concatned sring
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
