#include "main.h"

/**
  * create_file - creates a file
  * @filename: ptr to file
  * @text_content: ptr to str.
  * Return: 1 success.
  */
int create_file(const char *filename, char *text_content)
{
	FILE *new_file;

	if (filename == NULL)
		return (-1);

	new_file = fopen(filename, "w");

	if (new_file == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, new_file);

	fclose(new_file);

	if (chmod(filename, 0400 | 0200) != 0)
		return (-1);
	return (1);
}
