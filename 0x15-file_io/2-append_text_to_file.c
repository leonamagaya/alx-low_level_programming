#include "main.h"

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
 * append_text_to_file - a function that appends text at the eof.
 * @filename: name of the file.
 * @text_content: string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_o, fd_w, lentxt;

	if (filename == NULL)
		return (-1);

	fd_o = open(filename, O_WRONLY | O_APPEND);
	if (fd_o < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd_o);
		return (1);
	}

	lentxt = _strlen(text_content);

	fd_w = write(fd_o, text_content, lentxt);

	if (fd_w < 0)
		return (-1);

	close(fd_o);
	return (1);
}

