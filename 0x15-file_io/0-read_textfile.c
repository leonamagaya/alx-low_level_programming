#include "main.h"

/**
 * read_textfile -  function that reads a text file and
 *                  prints it to the POSIX standard output.
 * @filename: pointer to a file.
 * @letters: number of letters it should read and print.
 * Return:  actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_o;
	ssize_t fd_r, fd_w;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	fd_o = open(filename, O_RDONLY);
	if (fd_o < 0)
	{
		free(tmp);
		return (0);
	}

	fd_r = read(fd_o, tmp, letters);
	if (fd_r == -1)
	{
		free(tmp);
		close(fd_o);
		return (0);
	}

	fd_w = write(STDOUT_FILENO, tmp, fd_r);
	if (fd_w == -1)
	{
		free(tmp);
		close(fd_o);
		return (0);
	}

	close(fd_o);
	return (fd_r);
}
