#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write
 *                to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, _write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(file, text_content, len);

	if (file == -1 || _write == -1)
		return (-1);

	close(file);

	return (1);
}