#include "main.h"
/**
 * _strcat - concatinate 2 strs
 * @dest: the original string
 * @src: added str
 * Return: Pointer of the concatned string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
