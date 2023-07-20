#include "main.h"

/**
 * set_bit - Function Sets Bit Given Index  1
 * @n: Pointer Number Change
 * @index: Index Bit Set
 * Return: Succcess 1, Failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
