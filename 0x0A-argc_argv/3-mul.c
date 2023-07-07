#include <stdio.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 * @argc: argument number
 * @argv: argument array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", argv[1] * argv[2]);
	}
		printf("Error\n")

	return (0);
}
