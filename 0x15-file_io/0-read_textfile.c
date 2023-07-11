#include "main.h"

/**
 * read_textfile - Function print STDOUT
 * @filename: text file read
 * @letters: number of letters read
 * Return: w- actual number bytes read printed
 * 0 filename NULL function fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (fd == -1)
		return (0)
	b = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(b);
	close(f);
	return (w);
}
