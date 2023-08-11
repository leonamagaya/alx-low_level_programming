#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create.
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd_o, fd_w, count = 0;

	if (filename == NULL)
		return (-1);
	fd_o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd_o == -1)
		return (-1);

	while (text_content && *(text_content + count))
		count++;

	fd_w = write(fd_o, text_content, count);

	if (fd_w == -1)
		return (-1);

	close(fd_o);

	return (1);
}
