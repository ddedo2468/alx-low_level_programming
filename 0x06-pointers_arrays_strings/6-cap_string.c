#include <stdio.h>
#include "main.h"
/**
 * cap_string - return capitalize version of the string
 * @str: the string to be capitalized
 * Return: @s capitalized
 */
char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
    return (c - 32);
    }
    return (c);
}

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = to_upper(str[0]);
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
		str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = to_upper(str[i + 1]);
			}
		}
	}

	return (str);
}
