#include "main.h"
/**
 * read_textfile - a function that reads a text file
 *                 and prints it to the stdout.
 * @letters: number of leters  it should read and print.
 * @filename: pointer to a file.
 * Return: 0 if it fails.
 *         else number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	ssize_t fd_r, fd_w, fd_o;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
		return (0);

	fd_r = read(fd_o, temp, letters);
	fd_w = write(STDOUT_FILENO, temp, fd_r);

	if (fd_r == -1 || fd_w == -1)
	{
		free(temp);
		close(fd_o);
		return (0);
	}

	close(fd_o);
	return (fd_r);
}
