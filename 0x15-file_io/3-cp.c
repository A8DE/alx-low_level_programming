#include <stdio.h>
#include <stdlib.h>
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


/**
 * main - Function Copies Contents File Another File.
 * @argc: The Number Arguments Supplied Program.
 * @argv: Array Pointers Arguments.
 * Return: 0 Success.
 * Description: Argument count Incorrect - Exit Code 97.
 * file_from Not exist Cannot Read - Exit Code 98.
 * file_to Cannot Created Written - Exit Code 99.
 * file_to or file_from Not closed - Exit Code 100.
 */
int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, b, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(t, b, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(f, b, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(b);
	close_file(f);
	close_file(t);

	return (0);
}

