#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text file
 * @filename: ptr to the file.
 * @letters: letters count to read and print.
 * Return: if the file can not be opened or read, return 0.
 * if filename is NULL return 0
 * if write fails or does not write return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc;
	ssize_t recount, wwcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDWR);
	if (fileDesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	recount = read(fileDesc, buffer, letters);
	if (recount == -1)
		return (0);

	wwcount = write(STDOUT_FILENO, buffer, recount);
	if (wwcount == -1 || recount != wwcount)
		return (0);
	free(buffer);

	close(fileDesc);
	return (wwcount);
}
