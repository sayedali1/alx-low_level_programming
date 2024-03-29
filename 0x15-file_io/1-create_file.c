#include "main.h"
/**
 * _strlen - get the len of the string
 * @s: the string
 * Return: the len
 */
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}
/**
 * create_file - fun that create a file
 * @filename: pointer to the name of the file we want to create
 * @text_content: pointer to the NULL terminated string to write to the file
 * Return: 1 if success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_count;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, 0600);
	/* fd = open(filename,  O_CREAT|O_WRONLY|O_TRUNC, 0600); */
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w_count = write(fd, text_content, _strlen(text_content));

	if (w_count == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
