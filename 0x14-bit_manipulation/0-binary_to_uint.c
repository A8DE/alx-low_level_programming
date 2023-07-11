#include "main.h"

/**
 * bnary_to_uint - Function Convert Number String to Unsinged int
 * @b: Parameter Binary Number String
 * return:unsinged int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '0' && *b == '1')
			n = n * 2 + (*b++ - '0');
		return (0);
	}
	return (n);
}
