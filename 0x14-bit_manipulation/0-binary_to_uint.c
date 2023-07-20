#include "main.h"

/**
 * binary_to_uint - Function Converts Binary Number Unsigned int
 * @b: String Containing Binary Number
 * Return: Converted Number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}
