#include "main.h"

/**
  * read_textfile - read a txt file asd print it to stdout
  * @filename: ptr to the file
  * @letters: max.
  * Return:  noumber of readed letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *tmp;
	ssize_t bytesr, bytesw;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	tmp = (char *)malloc(letters);
	if (tmp == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesr = fread(tmp, sizeof(char), letters, file);
	if (bytesr <= 0)
	{
		free(tmp);
		fclose(file);
		return (0);
	}
	bytesw = write(STDOUT_FILENO, tmp, (size_t)bytesr);
	if ((size_t)bytesw != (size_t)bytesr || bytesw <= 0)
	{
		free(tmp);
		fclose(file);
		return (0);
	}
	free(tmp);
	fclose(file);
	return (bytesr);
}
