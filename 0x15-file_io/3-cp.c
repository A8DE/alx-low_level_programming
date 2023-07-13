#include "main.h"

/**
 * create_buffer - Function Allocates 1024 bytes for buffer.
 * @file: The name file buffer storing chars for.
 * Return: Pointer Newly-allocated Buffer.
 */
char *create_buffer(char *fil);
void close_file(int f);
char *create_buffer(char *fil)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fil);
		exit(99);
	}

	return (b);
}


/**
 * close_file - Fonction Closes File Descriptors.
 * @fd: Parameter The File Descriptor Closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);
if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



