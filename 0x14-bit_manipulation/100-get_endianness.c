#include "main.h"
/**
 * get_endianness - Function Checks If Machine Little Or Big Endian
 * Return: Big 0, Little 1
 */
int get_endianness(void)
{
	unsigned int in = 1;
	char *ch = (char *) &in;

	return (*ch);
}

