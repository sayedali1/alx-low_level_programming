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

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, w_count;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_RDONLY | O_APPEND);
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
