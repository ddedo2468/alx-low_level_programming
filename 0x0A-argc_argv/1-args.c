#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument number
 * @argv: argument array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%s\n", argc - 1);

	return (0);
}
