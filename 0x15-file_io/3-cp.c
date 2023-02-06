#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _error - fun that print the error messeges
 * @exitNUM: exit num
 * @av:pointer to the argument values
 * @fd: the num of file discriptor
 */
void _error(int exitNUM, char **av, int fd)
{
	switch (exitNUM)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	default:
		break;
	}
}
/**
 * main - programe that copy to content of a file in another file
 * @ac: num of arguments
 * @av:pointer to the str of arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int old_fd, new_fd, r_count, w_count;
	char *buffer[1024];

	if (ac != 3)
		_error(97, NULL, 0);
	/* create new file discriptor */
	new_fd = creat(av[2], 0664);
	if (new_fd == -1)
		_error(99, av, 0);
	/* open the aready exist file */
	old_fd = open(av[1], O_RDONLY);
	if (old_fd == -1)
		_error(98, av, 0);

	while ((r_count = read(old_fd, buffer, 1024)) != 0)
	{
		if (r_count == -1)
			_error(98, av, 0);
		/* write on the new file */
		w_count = write(new_fd, buffer, r_count);
		if (w_count == -1)
			_error(99, av, 0);
	}

	if (close(old_fd) == -1)
		_error(100, NULL, old_fd);
	else
		close(old_fd);

	if (close(new_fd == -1))
		_error(100, NULL, old_fd);
	else
		close(new_fd);

	return (0);
}
