#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - adds positive numbers and print result.
 * @argc: argument number
 * @argv: argument array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, total = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
