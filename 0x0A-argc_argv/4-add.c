#include <stdio.h>
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
	int i, total;
	(void) argc;
	total = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			total += atoi(argv[i]);
		}
		
		printf("%d", total);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
