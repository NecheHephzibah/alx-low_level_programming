#define _POSIX_C_SOURCE 200809L
#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int copy_file(char *source_path, char *destination_path);

/**
 * main - function that starts every C programming.
 * @ac: argument count, counts the total number of arguments
 * @av: argument vector, an array of all the arguments
 * Return: 0 (Always successful).
 */

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
		exit(1);
	}
	n = copy_file(av[1], av[2]);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}

/**
 * copy_file - functions that copies file to another.
 * @source_path: pointer to the first file.
 * @destination_path: pointer to the second file.
 * Return: an integer.
 */

int copy_file(char *source_path, char *destination_path)
{
	int source_fd, destination_fd;
	char buffer[1024];
	ssize_t bytes_read;

	source_fd = open(source_path, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
		exit(98);
	}

	destination_fd = open(destination_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", destination_path);
		close(source_fd);
		exit(99);
	}
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(destination_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_path);
			close(source_fd);
			close(destination_fd);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
		exit(98);
	}
	if (close(source_fd) == -1 || close(destination_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close(source_fd) == -1) ? source_fd : destination_fd);
		exit(100);
	}
	return (0);
}
