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

