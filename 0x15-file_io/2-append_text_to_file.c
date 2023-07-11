#include "main.h"

int _strlen(char *s);

/**
 * _strlen - a function that returns the length of a string.
 * @s: input string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * append_text_to_file - function that appends text at
 *                       the end of a file.
 * @filename: the name of the file.
 * @text_content: string to add at the end of the file.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, fd_w, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	len = _strlen(text_content);
	fd_w = write(file, text_content, len);

	if (fd_w == -1 || text_content == NULL)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}


