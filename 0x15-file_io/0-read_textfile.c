#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a file and returns
 * the number of letters present.
 * @filename: pointer to a file name.
 * @letters: number of letters present in the file.
 * Return: number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file_descriptor;
	char *line;
	ssize_t bytes_read;

	line = malloc(sizeof(char) * (letters + 1));
	if (line == NULL)
		return (0);

	my_file_descriptor = open(filename, O_RDONLY);

	if (filename == NULL || my_file_descriptor == -1)
	{
		free(line);
		return (0);
	}

	bytes_read = read(my_file_descriptor, line, letters);
	if (bytes_read == -1)
	{
		free(line);
	return (0);
	}

	line[bytes_read] = '\0';
	bytes_read = write(STDOUT_FILENO, line, bytes_read);

	free(line);
	close(my_file_descriptor);
	return (bytes_read);
}
