#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void check_argc(int argc, char *argv0);
int open_files(char *source_path, char *destination_path,
	int *source_fd, int *destination_fd);
void copy_content(int source_fd, int destination_fd,
	char *source_path, char *destination_path);
void close_files(int source_fd, int destination_fd);

int main(int argc, char **argv)
{
    int source_fd, destination_fd;

    check_argc(argc, argv[0]);
    open_files(argv[1], argv[2], &source_fd, &destination_fd);
    copy_content(source_fd, destination_fd, argv[1], argv[2]);
    close_files(source_fd, destination_fd);

    return (0);
}

void check_argc(int argc, char *argv0)
{
    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv0);
        exit(97);
    }
}

int open_files(char *source_path, char *destination_path,
	int *source_fd, int *destination_fd)
{
    *source_fd = open(source_path, O_RDONLY);

    if (*source_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
        return (98);
    }

    *destination_fd = open(destination_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);

    if (*destination_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_path);
        close(*source_fd);
        return (99);
    }
	return (0);
}

void copy_content(int source_fd, int destination_fd,
	char *source_path, char *destination_path)
{
    char buffer[1024];
    ssize_t bytes_read;

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
}

void close_files(int source_fd, int destination_fd)
{
	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}
	if (close(destination_fd == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}
}

