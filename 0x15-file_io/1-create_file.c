#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file -  functions that creates file.
 * @filename: pointer to the file name.
 * @text_content: the content of the file to create.
 * Return: an integer.
 */


int create_file(const char *filename, char *text_content)
{
	int my_file_descriptor;
	size_t text_length = 0;
	ssize_t content;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
		text_length = strlen(text_content);

	my_file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (my_file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		content = write(my_file_descriptor, text_content, text_length);

		if (content == -1)
			return (-1);

	}
	
	close(my_file_descriptor);
	return(1);
}
