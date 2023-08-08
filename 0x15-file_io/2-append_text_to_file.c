#include "main.h"
/**
 * append_text_to_file - append text at end of file
 * @filename: ptr to file name.
 * @text_content: string to add.
 * Return: fails -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, lenth);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
