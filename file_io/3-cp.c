#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, exit with codes on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buf[1024];
	ssize_t nread, nwrite;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}

	while ((nread = read(fd_from, buf, 1024)) > 0)
	{
		nwrite = write(fd_to, buf, nread);
		if (nwrite == -1 || nwrite != nread)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	return (0);
}
