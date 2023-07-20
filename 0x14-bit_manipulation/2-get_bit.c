#include "main.h"

/**
 * get_bit - Function Returns Value Bit Index Decimal Number
 * @n: Number Search
 * @index: Index Bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int i)
{
	int bit;

	if (i > 63)
		return (-1);

	bit = (n >> i) & 1;

	return (bit);
}

