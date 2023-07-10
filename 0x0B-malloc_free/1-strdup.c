#include "main.h"
#include <stdlib.h>
/**
 * _strdup - str copy and re-print
 * @str: str to copy
 * Return: the cpy str or null if str is null
 */
char *_strdup(char *str)
{
	char *j;
	int i, k;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	j = malloc(i * sizeof(*j) + 1);
	if (j == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		j[k] = str[k];
	j[k] = '\0';

	return (j);
}
