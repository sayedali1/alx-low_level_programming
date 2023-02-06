#include "main.h"
/**
 * read_textfile - fun that reads a text file and prints it
 * to the standered output
 * @filename: pointer to the file name
 * @letters: size of the letter we want to read and write
 * Return: the size of char that have been printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_count, w_count;
	int *buffer;

	if (filename == NULL)
		return (0);
	/* open the file discriptor */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* allocate memory to store what we gonna read */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/* read what in the file discriptor */
	r_count = read(fd, buffer, letters);
	if (r_count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	/* write we stored in the buffer */
	w_count = write(STDOUT_FILENO, buffer, r_count);
	if (w_count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	return (r_count);
}
