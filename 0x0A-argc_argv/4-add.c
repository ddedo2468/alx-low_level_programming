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
	
	total = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		
		printf("%d", sum);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
